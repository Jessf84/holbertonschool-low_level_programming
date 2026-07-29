# C - Variadic Functions

## Description
This project explores **variadic functions** in the C programming language. It covers how to use the `stdarg.h` library to create functions that accept a variable number of arguments. 

## Learning Objectives
* What are variadic functions.
* How to use the `va_start`, `va_arg`, and `va_end` macros.
* How to use the `const` type qualifier.

## Requirements
* **Language**: C (compiled with `gcc 4.8.4` using flags `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Style**: [Betty Style](https://github.com) compliant.
* **OS**: Ubuntu 20.04 LTS.

## Environment Macros
The following macros from `<stdarg.h>` are utilized:
* `va_list`: Holds the information needed by the macros.
* `va_start`: Initializes the `va_list` variable.
* `va_arg`: Retrieves the next argument in the list.
* `va_end`: Cleans up the `va_list` variable memory.

## Tasks & Files

| File | Description |
| --- | --- |
| `0-sum_them_all.c` | Returns the sum of all its parameters. Returns `0` if `n == 0`. |
| `1-print_numbers.c` | Prints numbers, followed by a new line, using a specified separator string. |
| `2-print_strings.c` | Prints strings, followed by a new line. Prints `(nil)` if a string is `NULL`. |
| `3-print_all.c` | Prints anything based on a format string containing `c` (char), `i` (integer), `f` (float), or `s` (char *). |
| `variadic_functions.h` | Header file containing definition structures and function prototypes. |

## Compilation & Usage
To compile the files, use:
```bash
gcc -Wall -E -Werror -Wextra -pedantic -std=gnu89 main.c 0-sum_them_all.c -o sum
```

To run the executable:
```bash
./sum
```

## Author
* **Your Name** - [Your GitHub Profile](https://github.com)
