# 💫 Libft — Your Very First C Library

Welcome to **Libft**, a custom-built C library that reimplements essential functions from the C standard library, along with additional utility functions. This project is part of the **42 School curriculum**, and it forms the foundation for many upcoming projects.

![C](https://img.shields.io/badge/language-C-blue.svg)
![Makefile](https://img.shields.io/badge/build-Makefile-yellow.svg)
![Status](https://img.shields.io/badge/status-completed-brightgreen.svg)

---

## 📚 Table of Contents

- [About the Project](#about-the-project)
- [Features](#features)
- [How to Use](#how-to-use)
- [Project Structure](#project-structure)
- [Bonus Part](#bonus-part)
- [Resources](#resources)

---

## 🧠 About the Project

> C programming can be tedious without the help of the standard library.
> Libft aims to recreate some of the most useful standard functions from scratch — to understand how they work, and to use them freely in future projects.

This project helped me:
- Deeply understand how common functions like `strlen`, `memcpy`, `calloc`, etc. are implemented.
- Master memory management in C.
- Write code strictly following the **42 Norm**.
- Handle strings, memory, and lists with a self-made toolbox.

---

## ✨ Features

### 🔹 Part 1: Libc Functions

Reimplemented standard C functions with a custom prefix `ft_`. Example:

- `ft_strlen`
- `ft_memcpy`
- `ft_atoi`
- `ft_strdup`
- `ft_strncmp`
- `ft_toupper`, `ft_tolower`
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum` ...

### 🔸 Part 2: Additional Functions

Useful string manipulation and conversion functions:

- `ft_substr`, `ft_strjoin`, `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`, `ft_striteri`
- File descriptor outputs: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 🧪 Memory Allocation

All allocation done manually using `malloc`. Carefully handled memory leaks and edge cases.

---

## ⚙️ How to Use

Clone the repo and compile:

```bash
git clone https://github.com/husaltam/libft.git
cd libft
make

This will create a libft.a static library you can link in your C projects.

