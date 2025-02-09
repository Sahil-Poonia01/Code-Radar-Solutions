#include <stdio.h>

int main() {
    int num, n;

    scanf("%d", &num);

    scanf("%d", &n);

    // Create a mask with a 0 at the nth bit and 1s elsewhere
    int mask = ~(1 << n);

    // Clear the nth bit using bitwise AND
    num = num & mask;

    // Printing the new number after clearing the nth bit
    printf("The number after clearing the %dth bit is: %d\n", n, num);

    return 0;
}
