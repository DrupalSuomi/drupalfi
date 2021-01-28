#!/usr/bin/env bash

PROJECT_ID="alsnpnqjwib4y"
SKIP_FILES=false

MY_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
DUMP_FILE="${MY_DIR}/../sql-dumps/sql-dump-$(date +%Y-%m-%d_%H-%M-%S).sql"
BACKUP_FILE="${MY_DIR}/../sql-dumps/local-backup-$(date +%Y-%m-%d_%H-%M-%S).sql"
FILE_DIR="web/sites/default/files"

GREEN='\033[0;32m'
RED='\033[0;31m'
DEFAULT_COLOR='\033[0;0m'

# Parse arguments.
while getopts ":sp:" opt; do
  case $opt in
    s)
      SKIP_FILES=true
      ;;
    \?)
      echo "Invalid option: -$OPTARG" >&2
      exit 1
      ;;
    :)
      echo "Missing required argument" >&2
      exit 1
      ;;
  esac
done

if [ -z "$PROJECT_ID" ]; then
  printf "${RED}Please specify project ID\n${DEFAULT_COLOR}"
  exit 1
fi

read -t 15 -p "Please enter environment name to use (branch name or PR id, leave empty or wait for 15 seconds for master): " environment
environment=${environment:-master}

source ~/.bashrc

printf "${GREEN}Syncing site...\n${DEFAULT_COLOR}"

echo "Taking local backup..."
drush sql-dump --gzip --result-file="${BACKUP_FILE}"

echo "Getting the MySQL dump..."
platform db:dump --relationship="database" -p ${PROJECT_ID} -e "${environment}" --stdout > ${DUMP_FILE}

echo "Dropping database..."
drush sql-drop -y

echo "Importing the MySQL dump..."
drush sql-cli < ${DUMP_FILE}

if [ $SKIP_FILES == false ]; then
  echo "Syncing files..."
  platform mount:download -p ${PROJECT_ID} -e "${environment}" --mount=${FILE_DIR} --target="/app/${FILE_DIR}" --yes
fi

echo "Resetting admin password..."
drush upwd drupal-admin admin

echo "Clearing cache..."
drush cr

printf "${GREEN}All done!\n${DEFAULT_COLOR}"
