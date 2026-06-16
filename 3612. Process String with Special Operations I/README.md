# Process String with Special Operations I

## Problem

Given a string `s` consisting of lowercase English letters and the special characters `*`, `#`, and `%`, build a new string `result` by processing `s` from left to right using the following rules:

- If the character is a lowercase English letter, append it to `result`.
- If the character is `*`, remove the last character from `result`, if it exists.
- If the character is `#`, duplicate the current `result` and append it to itself.
- If the character is `%`, reverse the current `result`.

Return the final string `result` after processing all characters in `s`.

## Examples

Example 1:

- Input: `s = "a#b%*"`
- Output: `"ba"`
- Explanation:
  1. `a` -> `"a"`
  2. `#` -> `"aa"`
  3. `b` -> `"aab"`
  4. `%` -> `"baa"`
  5. `*` -> `"ba"`

Example 2:

- Input: `s = "z*#"`
- Output: `""`
- Explanation:
  1. `z` -> `"z"`
  2. `*` -> `""`
  3. `#` -> `""`

## Constraints

- `1 <= s.length <= 20`
- `s` consists only of lowercase English letters and the special characters `*`, `#`, and `%`.

## Files

- `process_string.cpp` - C++ implementation of the string processing logic.

## How to Run

Compile and run the program using a C++ compiler, for example:

```bash
cd "3612. Process String with Special Operations I"
g++ process_string.cpp -o process_string
./process_string
```

On Windows using the provided MinGW toolchain:

```cmd
cd "3612. Process String with Special Operations I"
C:\mingw64\bin\g++.exe process_string.cpp -o process_string.exe
process_string.exe
```
