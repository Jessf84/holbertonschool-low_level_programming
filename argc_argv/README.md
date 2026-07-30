# C - Variables, argc, argv

This project explores how a C program accepts and processes arguments passed directly from the command line. It covers the mechanics of argument counting (`argc`) and argument mapping using strings (`argv`), which are essential concepts for building interactive command-line interface (CLI) applications.

## Learning Objectives

By the end of this project, you should be able to explain:
* How to use arguments passed to your program.
* What `argc` and `argv` are, and how to utilize them.
* What the difference is between `argc` and `argv`.
* How to use `__attribute__((unused))` or `(void)` to bypass unused variable compilation flags.

## Requirements

* **Environment:** All files are compiled on Ubuntu 20.04 LTS using `gcc`.
* **Compilation Flags:** `-Wall -Werror -Wextra -pedantic -std=gnu89`
* **Style:** All code must conform to the [Betty style guidelines](https://github.com).
* **Restrictions:** You are not allowed to use global variables. No more than 5 functions per file.

## Core Concepts

### 1. `argc` (Argument Count)
An integer representing the total number of command-line arguments passed to the program, **including** the program name itself.

### 2. `argv` (Argument Vector)
An array of strings (pointers to characters) containing the actual arguments. 
* `argv[0]` is always the name of the program execution command.
* `argv[argc]` is guaranteed by the C standard to be `NULL`.

---

## File Summary

| File Name | Description |
| :--- | :--- |
| `0-whatsmyname.c` | A program that prints its own name, followed by a new line. |
| `1-args.c` | A program that prints the number of arguments passed into it. |
| `2-args.c` | A program that prints all arguments it receives, one per line. |
| `3-mul.c` | A program that multiplies two numbers and prints the result. |
| `4-add.c` | A program that adds positive numbers and prints the sum. |

---

## Compilation & Usage

To compile any file in this project, navigate to your local repository directory and use the standard `gcc` flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o myname
```

### Examples

**Printing the program name:**
```bash
\$ ./myname
./myname
\(mv myname new_name\) ./new_name
./new_name
```

**Multiplying two parameters:**
```bash
\$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-mul.c -o mul
\(./mul 4 5 20\) ./mul 4
Error
```

## Author

* **Your Name Here** - [Your GitHub Profile](https://github.com)
