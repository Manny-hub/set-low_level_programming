# 0x06. C - More pointers, arrays and strings

## Description

This project builds on pointers, arrays, and strings by implementing
custom versions of several standard C library string functions, along
with an array-reversal utility and two creative string-manipulation
functions (capitalizing words, and encoding a string into "1337"
speak). Each program is compiled and tested under Ubuntu 20.04 LTS
with strict compiler flags, and follows the Betty coding style.

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* Compiled on Ubuntu 20.04 LTS using `gcc`, with the flags:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All files end with a new line
* Code follows the [Betty](https://github.com/alx-tools/Betty) style, and
  is checked with `betty-style.pl` and `betty-doc.pl`
* No more than 5 functions per file
* No global variables
* No use of `printf`, `puts`, or similar standard output functions
* All output uses [`_putchar`](https://github.com/alx-tools/_putchar.c)
  (`_putchar.c` is not pushed to this repository)
* All function prototypes are declared in `main.h`

## Files

| File | Description |
| --- | --- |
| `main.h` | Header file with all function prototypes |
| `0-strcat.c` | Concatenates two strings |
| `1-strncat.c` | Concatenates two strings, using at most `n` bytes from `src` |
| `2-strncpy.c` | Copies a string, matching the behavior of the standard `strncpy` |
| `3-strcmp.c` | Compares two strings, matching the behavior of the standard `strcmp` |
| `4-rev_array.c` | Reverses the content of an array of integers |
| `5-string_toupper.c` | Converts all lowercase letters of a string to uppercase |
| `6-cap_string.c` | Capitalizes the first letter of every word in a string |
| `7-leet.c` | Encodes a string into "1337" speak |

## Compilation

Each file is compiled together with its corresponding `X-main.c` test
file, for example:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
```

Files that use `_putchar` (none in this particular set, though later
tasks in the module do) are additionally compiled with `_putchar.c`
(not included in this repository).

## Usage

Run the compiled binary directly:

```
./0-strcat
```

## Author

Julien Barbier