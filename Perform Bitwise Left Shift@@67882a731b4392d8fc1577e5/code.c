#include <stdio.h>

int main() {
    int num, shift, result;

    scanf("%d", &num);

    scanf("%d", &shift);

    // Performing the bitwise left shift operation
    result = num << shift;

    // Printing the result
    printf("%d\n", result);

    return 0;
}
