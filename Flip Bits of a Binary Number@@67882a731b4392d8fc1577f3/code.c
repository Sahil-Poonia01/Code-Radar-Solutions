#include <stdio.h>

void printBinary(unsigned int num) {
    // This function prints the binary representation of a number
    for (int i = 31; i >= 0; i--) {
        // Print the bit at position i
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

unsigned int flipBits(unsigned int num) {
    return ~num;  // Bitwise NOT operation
}

int main() {
    unsigned int num;

    scanf("%u", &num);
    
    // Flip the bits
    unsigned int flipped = flipBits(num);

    // Output the result in binary
    printf("Flipped binary number: ");
    printBinary(flipped);  // Print the flipped number in binary

    return 0;
}

