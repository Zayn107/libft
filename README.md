# Libft

## Introduction

The **Libft** project is part of the 42 curriculum and focuses on creating a personal **C standard library**. The goal is to reimplement essential functions from `<string.h>`, `<stdlib.h>`, and other standard C libraries to gain a deeper understanding of memory management, string manipulation, and linked lists.

## Objectives

- Recreate fundamental **C library functions**.
- Implement additional **utility functions** for future projects.
- Gain experience with **memory management** and **data structures**.
- Write clean, modular, and reusable code.

## Function Categories

### **Libc Functions**
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- `ft_strlcpy`, `ft_strlcat`, `ft_strlen`, `ft_strchr`, `ft_strrchr`
- `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`
- `ft_atoi`

### **Memory Allocation**
- `ft_calloc`, `ft_strdup`

### **Character Checks & Manipulations**
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_toupper`, `ft_tolower`

### **Additional Functions**
- `ft_substr`, `ft_strjoin`, `ft_strtrim`
- `ft_split`, `ft_itoa`
- `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### **Bonus (Linked List Functions)**
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
- `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`
- `ft_lstiter`, `ft_lstmap`

## Compilation & Usage

### Compilation

```bash
make
```

This generates `libft.a`, a static library that can be linked to other projects.

### Usage Example

```c
#include "libft.h"
#include <stdio.h>

int main()
{
    char str[] = "Hello, World!";
    printf("Length: %zu\n", ft_strlen(str));
    return 0;
}
```

### Linking with a Project

```bash
gcc main.c -L. -lft -o my_program
```

## Possible Enhancements

- Add **more data structures**, such as **queues** or **hash tables**.
- Optimize **memory management** for better performance.
- Implement **buffered I/O functions** for efficiency.

## Resources

- [C Standard Library Functions](https://en.cppreference.com/w/c/string)
- [Memory Management in C](https://www.geeksforgeeks.org/memory-management-c/)

## Author

This project was completed as part of the **42 School** curriculum.

---

### Disclaimer

This project is for educational purposes only and follows the **42 project guidelines**.
