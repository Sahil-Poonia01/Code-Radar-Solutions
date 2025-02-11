#include <stdio.h>

void simple_calculator(float num1, float num2, char operator) {
    float result;

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    }
}

int main() {
    float num1, num2;
    char operator;

    // Input from the user
    printf("Enter first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Error: Invalid input for first number.\n");
        return 1;
    }

    printf("Enter an operator (+, -, *, /): ");
    if (scanf(" %c", &operator) != 1) {
        printf("Error: Invalid operator input.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%f", &num2) != 1) {
        printf("Error: Invalid input for second number.\n");
        return 1;
    }

    // Perform the calculation based on the operator
    simple_calculator(num1, num2, operator);

    return 0;
}
