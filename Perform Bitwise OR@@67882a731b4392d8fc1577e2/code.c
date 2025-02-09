#include <stdio.h>

int main() {
    int num1, num2, result;

    scanf("%d", &num1);

    scanf("%d", &num2);

    // Performing bitwise OR operation
    result = num1 | num2;

    // Printing the result
    printf("Result of %d | %d = %d\n", num1, num2, result);

    return 0;
}
