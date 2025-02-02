# Libft - Custom C Standard Library

## Overview
This repository contains my own implementation of various standard C library functions, developed as part of the 42 school curriculum. The goal of this project was to reimplement commonly used functions from `<string.h>`, `<ctype.h>`, `<stdlib.h>`, and linked list manipulation functions. These functions are written in C and compiled into a static library.

## Features
The library includes functions for:
- **Memory Management**
  - `ft_memset` - Fills memory with a constant byte.
  - `ft_bzero` - Zeros out a memory block.
  - `ft_memcpy` - Copies memory area.
  - `ft_memmove` - Moves memory area safely.
  - `ft_memchr` - Scans memory for a byte.
  - `ft_memcmp` - Compares memory blocks.
  - `ft_calloc` - Allocates memory and initializes it to zero.

- **String Manipulation**
  - `ft_strlen` - Calculates the length of a string.
  - `ft_strdup` - Duplicates a string.
  - `ft_strcpy` - Copies a string.
  - `ft_strncpy` - Copies a specified number of characters from a string.
  - `ft_strcat` - Concatenates two strings.
  - `ft_strlcat` - Concatenates strings safely.
  - `ft_strchr` / `ft_strrchr` - Finds characters in a string.
  - `ft_strnstr` - Locates a substring in a string.
  - `ft_strncmp` - Compares two strings up to `n` characters.
  - `ft_strjoin` - Concatenates two strings.
  - `ft_strtrim` - Trims characters from the beginning and end of a string.
  - `ft_split` - Splits a string into an array using a delimiter.
  - `ft_substr` - Extracts a substring from a string.

- **Character Classification & Conversion**
  - `ft_isalpha` - Checks if a character is alphabetic.
  - `ft_isdigit` - Checks if a character is a digit.
  - `ft_isalnum` - Checks if a character is alphanumeric.
  - `ft_isascii` - Checks if a character is an ASCII character.
  - `ft_isprint` - Checks if a character is printable.
  - `ft_toupper` - Converts a character to uppercase.
  - `ft_tolower` - Converts a character to lowercase.

- **File Descriptor Operations**
  - `ft_putchar_fd` - Writes a character to a file descriptor.
  - `ft_putstr_fd` - Writes a string to a file descriptor.
  - `ft_putendl_fd` - Writes a string followed by a newline to a file descriptor.
  - `ft_putnbr_fd` - Writes an integer to a file descriptor.

- **Linked List Management**
  - `ft_lstnew` - Creates a new linked list node.
  - `ft_lstadd_front` - Adds a node at the beginning of a list.
  - `ft_lstadd_back` - Adds a node at the end of a list.
  - `ft_lstsize` - Counts the number of nodes in a list.
  - `ft_lstlast` - Finds the last node in a list.
  - `ft_lstdelone` - Deletes a single node from a list.
  - `ft_lstclear` - Deletes all nodes in a list.
  - `ft_lstiter` - Iterates through a list and applies a function to each node.
  - `ft_lstmap` - Creates a new list by applying a function to each node.

## Installation
1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/libft.git
   cd libft
   ```
2. Compile the library:
   ```sh
   make
   ```
3. Include it in your project:
   ```c
   #include "libft.h"
   ```
4. Link it during compilation:
   ```sh
   gcc main.c -L. -lft -o my_program
   ```

## Usage Example
```c
#include "libft.h"
#include <stdio.h>

int main(void) {
    char *str = "Hello, World!";
    printf("Length: %zu\n", ft_strlen(str));
    return 0;
}
```
