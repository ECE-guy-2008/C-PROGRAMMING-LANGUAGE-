# C Programming: `scanf("%c")` Input Buffer Bug

A small debugging reference project demonstrating why `scanf("%c", &operator)` can read a leftover newline after numeric input, and how to fix it.

## Problem

When you enter a number and press **Enter**, `scanf("%f", &x)` reads the number but leaves the newline (`\n`) in the input stream. A following `scanf("%c", &op)` does **not** skip whitespace, so it may read that newline immediately instead of waiting for an operator.

## Project structure

```text
C-Programming-Scanf-Input-Buffer-Bug/
├── README.md
├── buggy_calculator.c
├── fixed_calculator.c
└── .gitignore
```

## Compile and run

Using GCC:

```bash
gcc buggy_calculator.c -o buggy_calculator
./buggy_calculator
```

Run the corrected version:

```bash
gcc fixed_calculator.c -o calculator
./calculator
```

On Windows PowerShell, run the executable with:

```powershell
.\calculator.exe
```

## The fix

Change:

```c
scanf("%c", &op);
```

to:

```c
scanf(" %c", &op);
```

The leading space in the format string tells `scanf` to skip leading whitespace (spaces, tabs and newlines) before reading the character.

## Other option

You can consume the pending newline with `getchar()` after reading the number:

```c
scanf("%f", &x);
getchar();
scanf("%c", &op);
```

This simple `getchar()` approach assumes the next pending character is the newline. The leading-space format `" %c"` is generally the simpler choice for this case.

## What this project teaches

- How standard input (`stdin`) is buffered.
- The difference between `%f` and `%c` whitespace handling.
- How to diagnose input-related bugs.
- How to compile and run a C program with GCC.

## Example

```text
Enter first number: 10
Enter operator (+, -, *, /): *
Enter second number: 5
Result: 50.00
```
