# Reverse Array Printing Using Recursion and the Call Stack

A beginner-friendly C project demonstrating how recursive function calls use the **call stack** and why printing after a recursive call produces the array in reverse order.

## Example output

For this array:

```c
int arr[] = {10, 20, 30, 40, 50};
```

The program prints:

```text
50 40 30 20 10
```

## Project structure

```text
reverse-array-recursion-stack/
├── src/
│   └── reverse_array.c
├── docs/
│   └── stack-trace.md
├── .gitignore
└── README.md
```

## Compile and run (GCC)

Open a terminal in the project folder and run:

```bash
gcc src/reverse_array.c -o reverse_array
```

On Windows:

```powershell
.everse_array.exe
```

On Linux/macOS:

```bash
./reverse_array
```

## The key idea

```c
printArrayReverse(arr, n, index + 1);
printf("%d ", arr[index]);
```

The recursive call happens first. Each function call waits for the deeper call to finish. When the base case is reached, the calls return in last-in, first-out (LIFO) order. The pending `printf` statements then execute from the last array element to the first.

## Git setup

Run these commands from inside this project folder:

```bash
git init
git add .
git commit -m "Add recursive reverse array printing example"
```

Create an empty repository on GitHub, then connect it:

```bash
git branch -M main
git remote add origin https://github.com/YOUR-USERNAME/reverse-array-recursion-stack.git
git push -u origin main
```

Replace `YOUR-USERNAME` with your GitHub username.

## Learning challenge

1. Move `printf` before the recursive call. What changes?
2. Add a function that calculates the sum of the array recursively.
3. Draw the call stack for an array containing three elements.
