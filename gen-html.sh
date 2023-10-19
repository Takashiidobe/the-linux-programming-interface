#!/usr/bin/env bash

for d in $(find . -maxdepth 1 -type d -name "ch*"); do
  `cd $d && pandoc index.md -o index.html --template=$HOME/pandoc-github-template.html.template --filter pandoc-include -f markdown`
done
