*This project has been created as part of the 42 curriculum by kaloyanduve.*

# Libft

## Description

Libft is a personal C library developed at 42. It reimplements a selection of
standard C library functions and adds string, file-descriptor, allocation, and
linked-list utilities. The project is intended to provide a reusable foundation
for later 42 projects.

## Instructions

Build the library with:

```sh
make
```

This creates `libft.a`. The Makefile also provides:

```sh
make clean
make fclean
make re
```

To use the library, include `libft.h` and link `libft.a` when compiling your
program.

## Library overview

The library includes character classification and conversion, memory
manipulation, string handling, conversion and allocation helpers, output
functions using file descriptors, and singly linked-list operations.

The linked-list type stores a `void *content` pointer and a pointer to the next
node. The list API supports creation, insertion at either end, traversal,
counting, deletion, clearing, iteration, and mapping.

## Resources

The implementation was developed using the Libft subject, the C manual pages,
and the documented behavior of the corresponding standard C library functions.
Tripouille's libftTester is used as an additional local test suite.

### AI usage

AI tools were used to compare the previous Libft implementation with the current
subject, explain edge cases, assist with migration and refactoring, and review
the project for compliance and test failures. Suggested code and changes were
reviewed in the context of the project before being integrated.
