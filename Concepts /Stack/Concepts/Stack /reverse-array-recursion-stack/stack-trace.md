# Understanding the Call Stack

Consider this call:

```c
printArrayReverse(arr, 5, 0);
```

The function calls itself with the next index before it prints anything.

## 1. Going deeper

```text
printArrayReverse(index = 0)
    printArrayReverse(index = 1)
        printArrayReverse(index = 2)
            printArrayReverse(index = 3)
                printArrayReverse(index = 4)
                    printArrayReverse(index = 5)
                        return;  // base case
```

Each call has its own parameter values and a place to resume execution.

## 2. Returning (unwinding)

After the base case returns, the waiting calls continue after their recursive-call statement:

| Returning call | `arr[index]` | Printed |
|---|---:|---:|
| index = 4 | arr[4] | 50 |
| index = 3 | arr[3] | 40 |
| index = 2 | arr[2] | 30 |
| index = 1 | arr[1] | 20 |
| index = 0 | arr[0] | 10 |

Output:

```text
50 40 30 20 10
```

## 3. Why is this LIFO?

The last recursive call made (`index = 5`) reaches the base case and returns first. Then the most recently waiting call resumes, followed by the one before it.

This is the Last In, First Out (LIFO) behavior of the call stack.

> Note: The call stack is a runtime mechanism used to manage function calls. A stack data structure is the general LIFO concept; the call stack is one use of that concept.
