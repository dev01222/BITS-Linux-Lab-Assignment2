#!/bin/bash

mkdir -p backup

processed=0
duplicates=0
backedup=0

> Report.txt
> errors.txt

declare -A seen

for file in submissions/*; do
    [ -f "$file" ] || continue

    processed=$((processed + 1))

    hash=$(md5sum "$file" | awk '{print $1}')

    if [[ -n "${seen[$hash]}" ]]; then
        duplicates=$((duplicates + 1))
        echo "Duplicate file: $(basename "$file")" >> errors.txt
    else
        seen[$hash]=1
        cp "$file" backup/ 2>>errors.txt
        backedup=$((backedup + 1))
    fi
done

echo "Files Processed: $processed" > Report.txt
echo "Duplicate Files: $duplicates" >> Report.txt
echo "Files Backed Up: $backedup" >> Report.txt

echo "Task Completed"
