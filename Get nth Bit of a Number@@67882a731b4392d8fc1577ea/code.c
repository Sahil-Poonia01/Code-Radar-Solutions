#include <stdio.h>

int main() {
    int num, n, bitValue;

    scanf("%d", &num);
    
    scanf("%d", &n);

    // Retrieve the nth bit using bitwise shift and AND operation
    bitValue = (num >> n) & 1;

    // Printing the value of the nth bit
    printf("%d\n", num, bitValue);

    return 0;
}
