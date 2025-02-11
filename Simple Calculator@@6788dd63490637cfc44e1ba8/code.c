#include <stdio.h>

void simple_calculator(float num1, float num2, char operator) {
    float result;

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
    }
}

int main() {
    float num1, num2;
    char operator;

    // Input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any leftover newline character

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform the calculation based on the operator
    simple_calculator(num1, num2, operator);

    return 0;
}
