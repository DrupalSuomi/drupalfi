#!/bin/sh

# set project key
~/.platformsh/bin/platform project:set-remote $PLATFORMSH_PROJECT_KEY

# push environment
~/.platformsh/bin/platform push --force --target=$CI_COMMIT_REF_NAME --activate --parent=master
