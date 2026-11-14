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
    if (scanf(" %c", &op) != 1) {  /* Leading space skips whitespace */
        printf("Could not read operator.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%f", &y) != 1) {
        printf("Invalid second number.\n");
        return 1;
    }

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
