# 0x0D. C - Structures, typedef

A low-level C programming project focused on implementing custom user-defined data types, grouping related variables into structured memory profiles, and abstraction layers using type definitions.

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
This project explores the encapsulation of diverse data variables inside data blocks known as `struct` (structures) within C. It introduces object-oriented development mindsets at a procedural level, establishing foundational patterns for building structured memory records, handling nested metadata, and configuring object initializers.

---

## 🧠 Learning Objectives
By the end of this project, you are expected to be able to explain the following concepts without relying on external search engines:
- What structures are, how they differ from arrays, and why they are useful.
- How to declare, initialize, and use structures in variable memory space.
- The operational difference between the structural dot (`.`) access operator and the pointer arrow (`->`) access operator.

---

## 🛠️ Requirements & Constraints
All source modules must comply with the following structural rules to pass compilation pipelines:

- **Allowed Editors:** `vi`, `vim`, `emacs`.
- **Target OS & Compiler:** Ubuntu 20.04 LTS via `gcc`.
- **Mandatory Flags:** `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **Formatting Style:** Code must conform strictly to the **Betty Style**. Validated via `betty-style.pl` and `betty-doc.pl`.
- **Global Variables:** Forbidden.
- **Function Limits:** No more than **5 functions** per C file.
- **Header Files:** All structural definitions must reside in `dog.h`. All files must contain appropriate header macro guards.
- **File Endings:** Every code, header, and script file must end with a single trailing newline.

---

## 🚀 Compilation & Testing
To compile your structural blueprints together with a target implementation workflow runner file, execute:

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
```

---

## 📝 Tasks Summary

### 0. Poppy
Define a new type `struct dog` containing the following attributes:
* **File:** `dog.h`
* **Elements:**
  * `name` (type: `char *`)
  * `age` (type: `float`)
  * `owner` (type: `char *`)

---

## 📦 Repository Structure

* **GitHub Repository:** `holbertonschool-low_level_programming`
* **Directory:** `structures_typedef`

| File | Description |
| :--- | :--- |
| `dog.h` | Mandatory project structure blueprint containing definitions and documentation for `struct dog`. |
| `main.h` | Companion global function indexing prototype definitions. |
