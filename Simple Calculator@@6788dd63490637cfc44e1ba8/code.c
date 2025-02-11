#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    // Input first number, operator, and second number
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Space before %c to handle any leading whitespace
    
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform the operation based on the operator
    if (operator == '+') {
        printf("Result: %.2f\n", num1 + num2);
    } else if (operator == '-') {
        printf("Result: %.2f\n", num1 - num2);
    } else if (operator == '*') {
        printf("Result: %.2f\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("Result: %.2f\n", num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
