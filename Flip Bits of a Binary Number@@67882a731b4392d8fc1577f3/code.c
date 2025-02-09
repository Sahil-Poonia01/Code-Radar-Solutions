#include <stdio.h>

unsigned int flipBits(unsigned int num) {
    return ~num;  // Bitwise NOT operation
}

int main() {
    unsigned int num;
    
    scanf("%u", &num);
    
    // Flip the bits
    unsigned int flipped = flipBits(num);

    // Output the result
    printf("Original number: %u\n", num);
    printf("Flipped number: %u\n", flipped);

    return 0;
}
