# C Programming Practice

Welcome to **CProjects** — a collection of hands-on exercises and projects dedicated to learning, practicing, and improving **C programming**.

This repository is a practical learning space for building a strong foundation in C, understanding how programs work at a lower level, and developing problem-solving skills through small projects.

## Goals

- Practice C syntax and programming fundamentals.
- Strengthen problem-solving and logical thinking.
- Understand memory, pointers, and how data is managed.
- Work with files, processes, and the standard C library.
- Build progressively more challenging command-line applications.

## Topics Covered

The repository can grow alongside your C learning journey. Practice areas include:

| Topic | What to Practice |
| --- | --- |
| C Fundamentals | Variables, data types, constants, operators, and expressions |
| Input and Output | `printf()`, `scanf()`, and formatted output |
| Control Flow | `if`, `else`, `switch`, and loops |
| Functions | Parameters, return values, scope, and recursion |
| Arrays and Strings | One-dimensional arrays, multidimensional arrays, and string handling |
| Pointers | Addresses, pointer operations, and pointer arithmetic |
| Structures | `struct`, `typedef`, and related data organization |
| Dynamic Memory | `malloc()`, `calloc()`, `realloc()`, and `free()` |
| File Handling | Reading, writing, and managing files |
| Data Structures | Linked lists, stacks, queues, and basic trees |
| Build Tools | GCC, Clang, Make, and compiler warnings |

## C Programming Challenges

Use these challenges as a project roadmap. Try to complete each challenge independently before looking at example solutions. Mark an item as complete when the program works and you have tested it.

### Level 1 — Beginner

Focus: variables, input/output, operators, conditionals, loops, and functions.

- [ ] **Challenge 01: Personal Introduction** — Ask for a user's name, age, and favorite programming language, then display a formatted introduction.
- [ ] **Challenge 02: Basic Calculator** — Build a menu-driven calculator that supports addition, subtraction, multiplication, and division. Handle division by zero.
- [ ] **Challenge 03: Temperature Converter** — Convert between Celsius, Fahrenheit, and Kelvin.
- [ ] **Challenge 04: Number Guessing Game** — Generate a number and let the player guess it. Give higher/lower hints and count attempts.
- [ ] **Challenge 05: Multiplication Table** — Ask for a number and print its multiplication table up to a user-selected limit.
- [ ] **Challenge 06: Grade Calculator** — Accept several scores, calculate the average, and display a letter grade based on clearly defined ranges.
- [ ] **Challenge 07: Unit Converter** — Convert units such as miles/kilometers, inches/centimeters, and pounds/kilograms.
- [ ] **Challenge 08: Simple ATM Menu** — Create a simulated menu to check a starting balance, deposit, and withdraw. Reject invalid amounts and withdrawals above the balance.
- [ ] **Challenge 09: Prime Number Checker** — Determine whether a number is prime and optionally list primes within a range.
- [ ] **Challenge 10: Rock-Paper-Scissors** — Play against the computer, track wins/losses/ties, and allow another round.

### Level 2 — Intermediate

Focus: arrays, strings, functions, structures, pointers, and file handling.

- [ ] **Challenge 11: To-Do List** — Add, display, complete, and remove tasks in a command-line menu.
- [ ] **Challenge 12: Contact Book** — Store names, phone numbers, and email addresses. Add, search, edit, and delete contacts.
- [ ] **Challenge 13: Student Record Manager** — Use a `struct` to store student records and calculate averages. Support searching and sorting.
- [ ] **Challenge 14: Word Counter** — Read a text file and count words, characters, and lines.
- [ ] **Challenge 15: Tic-Tac-Toe** — Build a two-player game using a 3×3 array. Detect wins and draws.
- [ ] **Challenge 16: Password Strength Checker** — Evaluate password length and character variety, then explain which basic criteria are missing. Do not store real passwords.
- [ ] **Challenge 17: Text File Notes App** — Create, append, list, and search notes saved in a local text file.
- [ ] **Challenge 18: Inventory Manager** — Track item names, quantities, and prices. Calculate inventory value and save records to a file.
- [ ] **Challenge 19: Sorting and Searching Toolkit** — Implement linear search, binary search, bubble sort, and selection sort.
- [ ] **Challenge 20: Dynamic Array** — Use `malloc()` and `realloc()` to build an array that grows as values are added. Release allocated memory correctly.

### Level 3 — Advanced

Focus: data structures, modular programming, networking, and system-level concepts.

- [ ] **Challenge 21: Linked List Manager** — Implement a singly linked list with insert, delete, search, and display operations.
- [ ] **Challenge 22: Stack and Queue Library** — Implement stack and queue data structures and demonstrate their operations.
- [ ] **Challenge 23: Mini Shell** — Build a basic command interpreter that reads commands and handles a small, documented set of built-in commands.
- [ ] **Challenge 24: File Management Utility** — Create a command-line tool to list directory contents, inspect file information, and copy files using platform-appropriate APIs.
- [ ] **Challenge 25: Log File Analyzer** — Parse a sample application log and summarize counts by severity, date, or event type.
- [ ] **Challenge 26: TCP Client and Server** — Build a simple client/server program that exchanges messages over a local test network. Handle disconnects and invalid input.
- [ ] **Challenge 27: HTTP Server** — Create a basic HTTP/1.0 or limited HTTP/1.1 server that serves a static page. Parse requests carefully and document its limitations.
- [ ] **Challenge 28: Memory Allocation Tracker** — Wrap selected allocation calls in your own functions and track allocations and frees to help find leaks in your program.
- [ ] **Challenge 29: Data Structure Visualizer** — Display how a linked list, stack, queue, or sorting algorithm changes after each operation.
- [ ] **Challenge 30: Mini Database** — Store structured records in a file and support adding, searching, updating, deleting, and listing records.

### Challenge Completion Criteria

For each project:

1. Create a separate folder or source file with a descriptive name.
2. Write a short README explaining the goal and how to compile and run it.
3. Use functions to keep the code organized instead of putting everything in `main()`.
4. Validate user input and handle errors where appropriate.
5. Test normal cases, invalid input, and boundary cases.
6. Compile with warnings enabled and fix warnings where possible.
7. Commit the completed project to the repository.

**Extra credit:** Add command-line arguments, save/load functionality, unit tests, or a Makefile when they make sense for the project.

## Additional Project Ideas

Start with small exercises and increase the difficulty as your skills improve.

### Beginner
- Hello World
- Basic Calculator
- Temperature Converter
- Number Guessing Game
- Multiplication Table Generator
- Even or Odd Checker
- Simple Grade Calculator

### Intermediate
- To-Do List (CLI)
- Student Record Manager
- Contact Book
- Word and Character Counter
- File-Based Notes Application
- Tic-Tac-Toe
- Unit Converter

### Advanced
- Custom Data Structures
- Command-Line File Manager
- Log File Analyzer
- Simple HTTP Server
- Multi-client TCP Server
- Shell or Command Interpreter

These are suggested practice ideas. Implementations should be added as they are completed.

## Getting Started

### 1. Install a C compiler

Choose a compiler for your operating system:

- **Linux:** GCC or Clang (for example, install GCC with your distribution's package manager).
- **Windows:** GCC through MinGW-w64 or MSYS2, or Clang.
- **macOS:** Clang through Apple's Command Line Tools.

Check that the compiler is available:

```bash
gcc --version
```

### 2. Clone the repository

```bash
git clone https://github.com/ZeroScopeIntelligence/CProjects.git
cd CProjects
```

### 3. Compile a C program

For a file named `main.c`:

```bash
gcc -Wall -Wextra -std=c11 main.c -o program
```

### 4. Run the program

On Linux and macOS:

```bash
./program
```

On Windows (depending on your terminal and compiler setup):

```powershell
.\program.exe
```

## Recommended Compiler Flags

Use compiler warnings while practicing. They can help identify mistakes and improve code quality.

```bash
gcc -Wall -Wextra -Wpedantic -std=c11 main.c -o program
```

For debugging, you can also compile with debug symbols:

```bash
gcc -Wall -Wextra -Wpedantic -std=c11 -g main.c -o program
```

## Suggested Repository Structure

Organize exercises by topic or difficulty as the collection grows. One possible layout is:

```text
CProjects/
├── README.md
├── beginner/
│   ├── hello_world.c
│   └── calculator.c
├── intermediate/
│   └── contact_book.c
└── advanced/
    └── file_manager.c
```

## Learning Approach

1. Write the solution yourself before looking for examples.
2. Compile often and read compiler warnings.
3. Test normal inputs, invalid inputs, and boundary cases.
4. Use a debugger to understand unexpected behavior.
5. Refactor your code as you learn better techniques.
6. Document what each project does and how to compile it.

## Resources

- [GNU Compiler Collection (GCC)](https://gcc.gnu.org/)
- [Clang Compiler](https://clang.llvm.org/)
- [cppreference — C Language](https://en.cppreference.com/w/c)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)

## About

This repository is dedicated to practicing the **C programming language** through exercises, experiments, and practical projects.

Maintained by **ZeroScopeIntelligence**.

---

*Keep practicing, keep experimenting, and keep building.*
