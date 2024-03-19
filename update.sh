##
## EPITECH PROJECT, 2023
## Arcade-Share
## File description:
## update.sh
##

#!/bin/bash

repo_path=$1
host=$2

cd "$repo_path" || exit

commit_message=$(git log -1 --pretty=%B | jq -Rs .)

author_name=$(git log -1 --pretty=%an)


data="{\"username\": \"$author_name\", \"message\": $commit_message}" > "$temp_file"

echo $data

curl -X POST http://$host/update \
    --header "Content-Type: application/json" \
    --data "$data"

