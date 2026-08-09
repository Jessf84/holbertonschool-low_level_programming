# C Programming: My First Linked List

## What is this?
This project is a simple C program that creates and manages a **linked list**. Instead of using a normal array where everything is saved in one big block, a linked list connects separate pieces of data (called **nodes**) together using "pointers" that act like maps to the next item.

## The Files
* **`lists.h`** – The blueprint file. It tells the computer what our list structure looks like.
* **`main.c`** – The main script. It creates new list items, links them together, and tests out our code.
* **`print_list.c`** – A helper script that goes through our list, prints out what is inside, and counts the items.

## How to Run It
Open your Linux terminal and type this command to compile the code:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c print_list.c -o list_test
```

Then, run the program with this command:
```bash
./list_test
```
