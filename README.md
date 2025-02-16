# Dangling Pointers in C

This repository demonstrates a common error in C programming: dangling pointers.  A dangling pointer points to a memory location that has been deallocated, leading to unpredictable behavior.

The `bug.c` file contains code that exhibits this issue. The solution is provided in `bugSolution.c`.

## Understanding the Bug

Dangling pointers can occur in various situations, such as:

* After freeing dynamically allocated memory (using `free()`).
* When a function returns a pointer to a local variable that goes out of scope.
* When a pointer is used after the object it points to has been deleted.

## How to Fix it

The key to preventing dangling pointers is careful memory management. Always ensure that pointers are pointing to valid memory locations. Best practices include:

* Properly deallocating memory after use.
* Avoid returning pointers to local variables from functions.
* Using smart pointers (if your C++ compiler supports them) or reference counting can help prevent this problem in many scenarios.