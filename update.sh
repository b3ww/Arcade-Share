##
## EPITECH PROJECT, 2023
## Arcade-Share
## File description:
## update.sh
##

#!/bin/bash


repo_path=$1
cd "$repo_path" || exit

commit_message=$(git log -1 --pretty=%B)
author_name=$(git log -1 --pretty=%an)

temp_file=$(mktemp)

echo "{\"username\": \"$author_name\", \"message\": \"$commit_message\"}" > "$temp_file"

curl -X POST -d @"$temp_file" -H "Content-Type: application/json" http://$2/update

rm "$temp_file"