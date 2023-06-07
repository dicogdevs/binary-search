# Binary Search User Manual

This document serves as the user manual for the binary search project.

## How to Build

1. Navigate to the root directory of the project in your terminal.
2. Run the `make` command.

## How to Run

1. After building, navigate to the `bin/` directory.
2. Run the `binarysearch` executable.

## How Binary Search Works

Binary search is an efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing the search interval in half. If the value of the search key is less than the item in the middle of the interval, the binary search continues in the lower half of the interval. If the value of the search key is greater than the item in the middle, it will go on in the upper half. So, the list must be sorted.

In this implementation, the binary search function takes an array of integers, the size of the array, and the target value as input. It returns the index of the target value in the array if it is present, otherwise, it returns -1.
