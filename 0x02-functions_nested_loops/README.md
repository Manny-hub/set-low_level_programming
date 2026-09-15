# 0x02. C - Functions, nested loops

## Description

This project covers writing and using your own C functions, nested loops,
and working with a custom `_putchar` function instead of the standard
library's output functions. Each program is compiled and tested under
Ubuntu 20.04 LTS with strict compiler flags, and follows the Betty coding
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
| `1-alphabet.c` | Prints the alphabet in lowercase |
| `2-print_alphabet_x10.c` | Prints the alphabet in lowercase, 10 times |
| `3-islower.c` | Checks for a lowercase character |
| `4-isalpha.c` | Checks for an alphabetic character |
| `5-sign.c` | Prints the sign of a number |
| `6-abs.c` | Computes the absolute value of an integer |
| `7-print_last_digit.c` | Prints the last digit of a number |
| `8-24_hours.c` | Prints every minute of the day, from 00:00 to 23:59 |
| `9-times_table.c` | Prints the 9 times table, starting at 0 |
| `10-add.c` | Adds two integers |
| `11-print_to_98.c` | Prints all natural numbers from `n` to 98 |

## Compilation

Each file is compiled together with `_putchar.c` (not included here) and
its corresponding `X-main.c` test file, for example:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
```

## Usage

Run the compiled binary directly:

```
./1-alphabet
```

## Author

Julien Barbier