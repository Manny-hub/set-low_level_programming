# 0x08. C - Recursion

This project introduces recursion in C: functions that solve a problem by calling themselves on a smaller version of the same problem. Every function here follows the project rules: no loops, no global variables, no static variables, and no standard output functions other than `_putchar`.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Code follows the Betty style and passes `betty-style.pl` and `betty-doc.pl`
- No global variables
- No more than 5 functions per file
- No loops (`for`, `while`, `do/while`, `goto`)
- No static variables
- Only `_putchar` is used for output (`_putchar.c` is not pushed)
- All prototypes are declared in `main.h`

## Compilation

Each file is compiled together with its test `main` file. For example:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
```

Tasks that do not print with `_putchar` (tasks 2 to 6) do not need `_putchar.c` in the command.

## Files

| File | Prototype | Description |
|------|-----------|-------------|
| `main.h` | | Header file containing all function prototypes |
| `0-puts_recursion.c` | `void _puts_recursion(char *s);` | Prints a string, followed by a new line |
| `1-print_rev_recursion.c` | `void _print_rev_recursion(char *s);` | Prints a string in reverse |
| `2-strlen_recursion.c` | `int _strlen_recursion(char *s);` | Returns the length of a string |
| `3-factorial.c` | `int factorial(int n);` | Returns the factorial of `n`, or `-1` if `n` is lower than 0 |
| `4-pow_recursion.c` | `int _pow_recursion(int x, int y);` | Returns `x` raised to the power of `y`, or `-1` if `y` is lower than 0 |
| `5-sqrt_recursion.c` | `int _sqrt_recursion(int n);` | Returns the natural square root of `n`, or `-1` if there is none |
| `6-is_prime_number.c` | `int is_prime_number(int n);` | Returns `1` if `n` is prime, otherwise `0` |

Helper functions used by tasks 5 and 6 are also declared in `main.h`.

## Author

Ayomde Adeyeye