# Swapping Nodes in a Linked List

## Problem

You are given the `head` of a linked list, and an integer `k`.

Return the head of the linked list after swapping the values of the `k`th node from the beginning and the `k`th node from the end (the list is 1-indexed).

## Examples

Example 1:

- Input: `head = [1,2,3,4,5], k = 2`
- Output: `[1,4,3,2,5]`

Example 2:

- Input: `head = [7,9,6,6,7,8,3,0,9,5], k = 5`
- Output: `[7,9,6,6,8,7,3,0,9,5]`

## Constraints

- The number of nodes in the list is `n`.
- `1 <= k <= n <= 100`
- `0 <= Node.val <= 100`

## Files

- `Approach1.cpp` - C++ implementation that finds the kth node from the beginning and kth node from the end by traversing the list twice, then swaps their values.
- `Approach2.cpp` - C++ implementation that stores nodes in a vector, then swaps the values of the corresponding kth nodes using direct indexing.

## How to Run

Compile and run either implementation using a C++ compiler, for example:

```bash
cd "1721. Swapping Nodes in a Linked List"
g++ Approach1.cpp -o Approach1
./Approach1

g++ Approach2.cpp -o Approach2
./Approach2
```

On Windows using MinGW:

```cmd
cd "1721. Swapping Nodes in a Linked List"
C:\mingw64\bin\g++.exe Approach1.cpp -o Approach1.exe
Approach1.exe

C:\mingw64\bin\g++.exe Approach2.cpp -o Approach2.exe
Approach2.exe
```
