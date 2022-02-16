---
title: Introduction to C Programming
description: C is one of the most popular programming language because it is structured, high level and machine independent.
---

# Introduction to C Programming

## Introduction

C is one of the most popular programming language because it is [structured](https://en.wikipedia.org/wiki/Structured_programming), [high level](https://en.wikipedia.org/wiki/High-level_programming_language) and [machine independent](https://en.wikipedia.org/wiki/Cross-platform_software).

## History

C programming language was evolved from [ALGOL](https://en.wikipedia.org/wiki/ALGOL), [BCPL](https://en.wikipedia.org/wiki/BCPL) and [B](<https://en.wikipedia.org/wiki/B_(programming_language)>) and invented by [**Dennis Ritchie**](https://en.wikipedia.org/wiki/Dennis_Ritchie) at the [**Bell Laboratories**](https://en.wikipedia.org/wiki/Bell_Labs) in 1972.

## Popularity

Some of the reasons for the popularity of C language are :-

- Programs written in C are efficient and fast due to its variety of [data types](https://en.wikipedia.org/wiki/Data_type) and powerful [operators](<https://en.wikipedia.org/wiki/Operator_(computer_programming)>).

- C programming language has a wide range of [built-in-functions](https://en.wikipedia.org/wiki/Intrinsic_function).

- C programmes are highly [portable](https://en.wikipedia.org/wiki/Software_portability). This means that any C programme written for one computer can run on another computer with little or no modification.

- Another important feature of C programming language is its ability to extend itself. A C programme is basically a collection of functions, so we can continuously add our own functions to C programme.

## Programming Structure

A C programme is divided into several sections, each having its own importance.

```
Documentation Section

Link Section

Definition Section

Global Declaration Section

main() Function Section
{
    Declaration Part
    Executable Part
}

Subprogram Section
    Function 1
    Function 2
    ...
    Function n
```

### Documentation section

It consists of comments such as programme name, author name and other details.

**Comments** are those lines in a programme that are being ignored by the compiler.

In c the comments starts with `/*` and ends with `*/`

```c
/* this is a comment in C */
```

### Link Section

It provide instructions to the compiler to link functions from the system library.

As mentioned earlier, the c programmes are divided into functions. Some functions are written by users while many others are stored in the C library. To include those library functions in our programme we use

```c
#include <function header>
```

### Definition Section

It defines all symbolic constants.

`#define` is used to declare the values of variable whose value will be constant throughout all the functions in a programme.

```c
#define PI 3.1416
```

### Global Declaration Section

It consists of global variables and user defined functions.

**Global variables** are the variables whose value will be used in more than one function.

### Main Function Section

Every c programme must have one `main()` function section. It is executed first in every C programme.

It consists of two parts, **declaration part** and **executable part**. The declaration part declares all the variables used in the executable part. The executable part consists atleast one statement. All statements in the declaration and executable parts end with semicolon( `;` )

### Subprogram Section

It contains all the user-defined functions that are called in the `main` function.

**Note** :- _all sections, except the main function section may be absent when they are not required_.

## Sample Programme

Here is a programme to add two numbers.

```c
/* This is a sample programme */

#include <stdio.h>

int main() {
    int a = 2;
    int b = 3;
    int c = a + b;
    printf("Sum = %d", c);
}
```

## Programming Style

Unlike some other programming languages ( COBOL, FORTRAN, etc. ) C is a _free-form language_. That is, the C compiler does not care, where on the line we begin typing.

Since C is a _free-form language_, we can group statements together on one line. The statements

```c
int x = 5;
float y = 4.0;
int z = 6;
```

can be written on one line as

```c
int x = 5;float y = 4.0;int z = 6;
```

As this, we can write a C programme in just one line. But it will be hard to understand and update.
