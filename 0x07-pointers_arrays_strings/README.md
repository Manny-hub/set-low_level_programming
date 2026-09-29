# 0x07. C - Even more pointers, arrays and strings

## Description

This project goes further into pointers, memory manipulation, and
multidimensional arrays, implementing custom versions of several more
standard C library functions (memory and string search functions),
along with functions to print a 2D chessboard and the diagonal sums
of a square matrix. Each program is compiled and tested under Ubuntu
20.04 LTS with strict compiler flags, and follows the Betty coding
style.

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* Compiled on Ubuntu 20.04 LTS using `gcc`, with the flags:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All files end with a new line
* Code follows the [Betty](https://github.com/alx-tools/Betty) style, and
  is checked with `betty-style.pl` and `betty-doc.pl`
* No more than 5 functions per file
* No global variables
* No use of `printf`, `puts`, or similar standard output functions,
  except where a task explicitly allows the standard library
* All output uses [`_putchar`](https://github.com/alx-tools/_putchar.c)
  (`_putchar.c` is not pushed to this repository)
* All function prototypes are declared in `main.h`

## Files

| File | Description |
| --- | --- |
| `main.h` | Header file with all function prototypes |
| `0-memset.c` | Fills memory with a constant byte |
| `1-memcpy.c` | Copies `n` bytes from one memory area to another |
| `2-strchr.c` | Locates the first occurrence of a character in a string |
| `3-strspn.c` | Gets the length of a prefix substring made up only of accepted bytes |
| `4-strpbrk.c` | Searches a string for the first byte matching any of a set of bytes |
| `5-strstr.c` | Locates the first occurrence of a substring in a string |
| `6-print_chessboard.c` | Prints an 8x8 chessboard from a 2D char array |
| `7-print_diagsums.c` | Prints the sums of the two diagonals of a square integer matrix |

## Compilation

Each file is compiled together with its corresponding `X-main.c` test
file, for example:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
```

Files that use `_putchar` (such as `6-print_chessboard.c`) are
additionally compiled with `_putchar.c` (not included in this
repository):

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_chessboard.c -o 6-print_chessboard
```

## Usage

Run the compiled binary directly:

```
./0-memset
```

## Author

Ayomide Adeyeye 