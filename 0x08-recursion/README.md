# 0x08. C - Recursion

## Description

This project explores recursion in C by reimplementing several familiar
operations — printing a string, reversing a string, computing a string's
length, factorial, exponentiation, integer square root, and primality
testing — entirely without loops. Every repeated operation is expressed
as a function calling itself, with a clear base case and recursive case.
Each program is compiled and tested under Ubuntu 20.04 LTS with strict
compiler flags, and follows the Betty coding style.

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* Compiled on Ubuntu 20.04 LTS using `gcc`, with the flags:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All files end with a new line
* Code follows the [Betty](https://github.com/alx-tools/Betty) style, and
  is checked with `betty-style.pl` and `betty-doc.pl`
* No more than 5 functions per file
* No global variables
* No `static` variables
* **No loops of any kind** — every repeated operation is implemented
  recursively
* No use of `printf`, `puts`, or similar standard output functions
* All output uses [`_putchar`](https://github.com/alx-tools/_putchar.c)
  (`_putchar.c` is not pushed to this repository)
* All function prototypes are declared in `main.h`

## Files

| File | Description |
| --- | --- |
| `main.h` | Header file with all function prototypes |
| `0-puts_recursion.c` | Prints a string, followed by a new line, using recursion |
| `1-print_rev_recursion.c` | Prints a string in reverse, using recursion |
| `2-strlen_recursion.c` | Returns the length of a string, using recursion |
| `3-factorial.c` | Returns the factorial of a number, using recursion |
| `4-pow_recursion.c` | Returns `x` raised to the power of `y`, using recursion |
| `5-sqrt_recursion.c` | Returns the natural square root of a number (or `-1` if none exists), using recursion |
| `6-is_prime_number.c` | Returns whether an integer is a prime number, using recursion |

## Compilation

Each file is compiled together with its corresponding `X-main.c` test
file, for example:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-puts_recursion.c -o 0-puts_recursion
```

Files that use `_putchar` (such as `0-puts_recursion.c` and
`1-print_rev_recursion.c`) are additionally compiled with `_putchar.c`
(not included in this repository):

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
```

## Usage

Run the compiled binary directly:

```
./0-puts_recursion
```

## Author

Ayomide Adeyeye