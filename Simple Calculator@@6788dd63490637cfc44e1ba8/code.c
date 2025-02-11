#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Input: two integers and an operator
    scanf("%d %d %c", &num1, &num2, &operator);

    // Perform the operation based on the operator
    if (operator == '+') {
        printf("%d\n", num1 + num2);
    } else if (operator == '-') {
        printf("%d\n", num1 - num2);
    } else if (operator == '*') {
        printf("%d\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("%d\n", num1 / num2);
        } else {
            printf("error\n");  // Division by zero error
        }
    } else {
        printf("error\n");  // Invalid operator
    }

    return 0;
}
