# Remove Nth Node From End of List

## Problem

Given the `head` of a linked list, remove the `nth` node from the end of the list and return its head.

## Examples

Example 1:

- Input: `head = [1,2,3,4,5], n = 2`
- Output: `[1,2,3,5]`

Example 2:

- Input: `head = [1], n = 1`
- Output: `[]`

Example 3:

- Input: `head = [1,2], n = 1`
- Output: `[1]`

## Constraints

- The number of nodes in the list is `sz`.
- `1 <= sz <= 30`
- `0 <= Node.val <= 100`
- `1 <= n <= sz`

## Files

- `RemoveNth_node.cpp` - C++ implementation that removes the nth node from the end of a linked list by computing the list size and deleting the target node.

## How to Run

Compile and run the program using a C++ compiler, for example:

```bash
cd "19. Remove Nth Node From End of List"
g++ RemoveNth_node.cpp -o RemoveNth_node
./RemoveNth_node
```

On Windows using MinGW:

```cmd
cd "19. Remove Nth Node From End of List"
C:\mingw64\bin\g++.exe RemoveNth_node.cpp -o RemoveNth_node.exe
RemoveNth_node.exe
```