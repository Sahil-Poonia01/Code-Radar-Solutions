#include <stdio.h>

int main() {
    int num, n, bitValue;

    scanf("%d", &num);
    
    scanf("%d", &n);

    // Retrieve the nth bit using bitwise shift and AND operation
    bitValue = (num >> n) & 1;

    // Printing the value of the nth bit
    printf("The value of the %dth bit of %d is: %d\n", n, num, bitValue);

    return 0;
}
