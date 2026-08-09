# File I/O - Reading Text Files in C

Hey! Welcome to this project. This is all about learning how to work with files in C using low-level system commands (like opening, reading, and writing files directly through Linux).

---

## What You Need to Know

* **What it runs on:** Ubuntu Linux (specifically version 20.04 LTS).
* **Compiler:** `gcc` with strict style and error flags (`-Wall -Werror -Wextra -pedantic -std=gnu89`).
* **Code Style:** Must follow **Betty** style rules (proper spacing, comment formats, and variable structures).
* **No globals:** Keep your code clean without using global variables.

---

## The Main Task

### 0. Tread lightly, she is near (`0-read_textfile.c`)
* **What it does:** Reads a text file and prints a specific number of characters straight to the terminal screen (POSIX standard output).
* **The Function:** `ssize_t read_textfile(const char *filename, size_t letters);`
* **What it returns:** 
  * The exact number of letters it successfully read and printed.
  * `0` if anything goes wrong (like the file not opening, being missing/NULL, or failing to write properly).

---

## How to Test It

1. Open your terminal.
2. Compile the files together using this command:
   ```bash
   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
