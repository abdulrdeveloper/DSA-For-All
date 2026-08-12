# Complexity

## Big O Basics

- `O(1)` means constant time.
- `O(log n)` means time grows slowly as input grows.
- `O(n)` means time grows linearly with input size.
- `O(n log n)` is common in efficient sorting and divide-and-conquer.
- `O(n^2)` usually means nested loops over the same data.

## Quick Rules

- One loop over `n` items: `O(n)`.
- Two nested loops over `n` items: `O(n^2)`.
- Binary search style halving: `O(log n)`.
- Hash map lookups are usually `O(1)` average.

## Practice Note

Write the time and space complexity for every solution after solving it.
