#include <stdio.h>

int main() {
    int num, result;

    scanf("%d", &num);

    // Performing the bitwise one's complement operation
    result = ~num;

    // Printing the result
    printf("%d\n", result);

    return 0;
}
