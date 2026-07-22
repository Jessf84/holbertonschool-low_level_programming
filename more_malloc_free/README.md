# 0x0B. C - More malloc, free

A low-level programming project focused on advanced dynamic memory allocation strategies, handling allocation failures, and controlled process termination in C.

---

## 📋 Table of Contents
- [About the Project](#-about-the-project)
- [Learning Objectives](#-learning-objectives)
- [Requirements & Constraints](#-requirements--constraints)
- [Compilation & Testing](#-compilation--testing)
- [Tasks Summary](#-tasks-summary)
- [Repository Structure](#-repository-structure)

---

## 🔍 About the Project
This project explores the deeper nuances of dynamic memory allocation using the standard library. It requires strict memory management practices, defensive programming against allocation failures, and direct interaction with system heap memory allocation without higher-level abstraction helpers.

---

## 🧠 Learning Objectives
By the end of this project, you are expected to be able to explain the following concepts without the help of Google:
- How to properly use the `exit` function to handle terminating states.
- What the standard library functions `calloc` and `realloc` are and how to use them.
- The best practice answer regarding whether or not to cast the result of `malloc`.

---

## 🛠️ Requirements & Constraints
All source files must follow these rigorous institutional rules to pass automated evaluations:

- **Allowed Editors:** `vi`, `vim`, `emacs`.
- **Target OS & Compiler:** Compiled on Ubuntu 20.04 LTS using `gcc`.
- **Mandatory Flags:** `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **File Integrity:** All files must end with a trailing newline character.
- **Coding Style:** Must match the **Betty Style**. Checked using `betty-style.pl` and `betty-doc.pl`.
- **Global Variables:** Strictly forbidden.
- **Function Limits:** No more than **5 functions** per C source file.
- **Library Restrictions:** The only standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, or `realloc` is completely forbidden within development tasks.
- **Allowed I/O:** Custom implementation of `_putchar`.

---

## 🚀 Compilation & Testing

To compile your source files together with a test `main.c` file using the mandatory evaluation flags, execute:

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a
```

### Checking the Process Status Code
To verify that your function successfully returns the explicit failure exit code status (`98`) when memory allocation is exhausted, check the exit status variable in your shell immediately after running the program:

```sh
./a
echo \$?
```

---

## 📝 Tasks Summary

### 0. Trust no one
Write a function that allocates memory using `malloc`.
* **File:** `0-malloc_checked.c`
* **Prototype:** `void *malloc_checked(unsigned int b);`
* **Behavior:** Returns a pointer to the allocated memory. If `malloc` fails, the `malloc_checked` function must cause normal process termination with an explicit status value of `98`.

---

## 📦 Repository Structure

* **GitHub Repository:** `holbertonschool-low_level_programming`
* **Directory:** `more_malloc_free`
* **Header Architecture:** All function definitions must be indexed within the `main.h` header file.

| File | Description |
| :--- | :--- |
| `main.h` | Mandatory project header file containing all function prototypes. |
| `0-malloc_checked.c` | Core function executing safe memory allocations using `malloc`. |
