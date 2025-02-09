#include <stdio.h>

void printBinary(int num) {
    int found = 0;  // To handle leading zeros
    
    // Size of integer in bytes (usually 4 bytes or 32 bits in most systems)
    int size = sizeof(num) * 8;
    
    // Loop through all bits from the most significant bit (MSB) to the least significant bit (LSB)
    for (int i = size - 1; i >= 0; i--) {
        // Check if the current bit is set (1)
        if ((num >> i) & 1) {
            printf("1");
            found = 1;  // Once we find the first 1, we stop skipping zeros
        }
        // Print only after the first 1 is found to avoid leading zeros
        else if (found) {
            printf("0");
        }
    }
    
    // If the number is 0, print 0
    if (!found) {
        printf("0");
    }
    
    printf("\n");
}

int main() {
    int num;
  
    scanf("%d", &num);
    
    // Call the function to print the binary representation
    printf(" ", num);
    printBinary(num);
    
    return 0;
}
