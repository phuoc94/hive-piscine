#!/bin/bash

# Check if two arguments are provided
if [ $# -ne 2 ]; then
  echo "Usage: $0 <source_directory> <destination_directory>"
  exit 1
fi

# Store the arguments in variables
source_dir="$1"
dest_dir="$2"

# Loop through files (0 to 8)
for i in {0..8}; do
  # Construct source and destination file paths
  source_file="$source_dir/ex0$i/main.c"
  dest_file="$dest_dir/ex0$i/main.c"

  # Check if source file exists
  if [ ! -f "$source_file" ]; then
    echo "Error: Source file '$source_file' does not exist."
    continue  # Skip to the next iteration if source file is missing
  fi

  # Copy the file
  cp "$source_file" "$dest_file"
  if [ $? -eq 0 ]; then
    echo "Copied '$source_file' to '$dest_file'"
  else
    echo "Error: Failed to copy '$source_file' to '$dest_file'"
  fi
done
