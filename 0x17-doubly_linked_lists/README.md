# 0x17. C - Doubly linked lists

This repository contains solutions to the tasks related to doubly linked lists in C. The main objective of this project is to gain a deep understanding of doubly linked lists and their usage.

## Learning Objectives

By the end of this project, you will be able to:

- Explain what a doubly linked list is.
- Use doubly linked lists effectively.
- Find relevant information without excessive reliance on external resources.

## Resources

To complete this project, you may find the following resources helpful:

- [What is a Doubly Linked List](https://en.wikipedia.org/wiki/Doubly_linked_list)

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All your files should end with a new line.
- A `README.md` file, at the root of the project folder, is mandatory.
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`.
- You are not allowed to use global variables.
- No more than 5 functions are allowed per file.
- The only C standard library functions allowed are `malloc`, `free`, `printf`, and `exit`.
- The prototypes of all your functions should be included in a header file called `lists.h`.
- Don't forget to push your header file.
- All your header files should be include guarded.

## Data Structure

Please use the following data structure for this project:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Tasks

### Task 0: Print list

Write a function that prints all the elements of a `dlistint_t` list.

- Prototype: `size_t print_dlistint(const dlistint_t *h);`
- Return: the number of nodes
- Format: see example

Example:
```c
$ cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
```

Output:
```
9
8
-> 2 elements
```

## Description
This project contains C programs that implement various operations on doubly linked lists. The programs are organized into separate files, each addressing a specific task related to doubly linked lists.

## List of Files and Functions
1. **1-dlistint_len.c** - This program defines the function `dlistint_len` that returns the number of elements in a linked `dlistint_t` list.

2. **2-add_dnodeint.c** - This program defines the function `add_dnodeint` that adds a new node at the beginning of a `dlistint_t` list.

3. **3-add_dnodeint_end.c** - This program defines the function `add_dnodeint_end` that adds a new node at the end of a `dlistint_t` list.

4. **4-free_dlistint.c** - This program defines the function `free_dlistint` that frees a `dlistint_t` list.

5. **5-get_dnodeint.c** - This program defines the function `get_dnodeint_at_index` that returns the nth node of a `dlistint_t` linked list.

6. **6-sum_dlistint.c** - This program defines the function `sum_dlistint` that returns the sum of all the data (n) of a `dlistint_t` linked list.

7. **7-insert_dnodeint.c** - This program defines the function `insert_dnodeint_at_index` that inserts a new node at a given position in a `dlistint_t` list.

## Usage
Follow the instructions below to compile and run these programs:

1. Clone the repository from GitHub:
```
$ git clone <repository-url>
```

2. Navigate to the project directory:
```
$ cd 0x17-doubly_linked_lists
```

3. Compile the desired program using `gcc`. For example, to compile `1-dlistint_len.c`, use the following command:
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o len
```

4. Run the compiled program:
```
$ ./len
```

## Repository
All the files for this project can be found in the [alx-low_level_programming](https://github.com/user/alx-low_level_programming) GitHub repository, in the directory [0x17-doubly_linked_lists](https://github.com/user/alx-low_level_programming/tree/main/0x17-doubly_linked_lists).

## Authors
These programs were implemented by [David babalola] for the [ALX](https://www.alx.com/) Software Engineering Program.
