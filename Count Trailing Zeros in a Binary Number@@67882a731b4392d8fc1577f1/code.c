#include <stdio.h>

int countTrailingZeros(unsigned int num) {
    int count = 0;
    // Check the least significant bit
    while (num > 0 && (num & 1) == 0) {
        count++;
        num >>= 1;  // Right shift the number to check the next bit
    }
    return count;
}

int main() {
    unsigned int num;

    scanf("%u", &num);
    
    // Count the trailing zeros
    int trailing_zeros = countTrailingZeros(num);

    // Output the result
    printf("%d\n", trailing_zeros);

    return 0;
}
