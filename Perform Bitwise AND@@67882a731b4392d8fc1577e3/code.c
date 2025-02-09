#include <stdio.h>

int main() {
    int num1, num2, result;

    scanf("%d", &num1);

    scanf("%d", &num2);

    // Performing bitwise AND operation
    result = num1 & num2;

    // Printing the result
    printf("%d\n", result);

    return 0;
}
