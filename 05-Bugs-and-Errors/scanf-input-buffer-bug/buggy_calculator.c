#include <stdio.h>

int main(void)
{
    float x, y;
    char op;

    printf("Enter first number: ");
    if (scanf("%f", &x) != 1) {
        printf("Invalid first number.\n");
        return 1;
    }

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);  /* BUG: may read the leftover newline */

    printf("Enter second number: ");
    if (scanf("%f", &y) != 1) {
        printf("Invalid second number.\n");
        return 1;
    }

    printf("Operator read: '%c' (character code: %d)\n", op, (unsigned char)op);

    if (op == '+') {
        printf("Result: %.2f\n", x + y);
    } else if (op == '-') {
        printf("Result: %.2f\n", x - y);
    } else if (op == '*') {
        printf("Result: %.2f\n", x * y);
    } else if (op == '/') {
        if (y == 0.0f) {
            printf("Error: division by zero is not allowed.\n");
        } else {
            printf("Result: %.2f\n", x / y);
        }
    } else {
        printf("Invalid operator.\n");
    }

    return 0;
}
