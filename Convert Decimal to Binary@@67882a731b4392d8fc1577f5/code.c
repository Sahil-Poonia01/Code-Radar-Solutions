#include <stdio.h>

void printBinary(int num) {
    // Size of integer in bytes (in most systems, it's 4 bytes or 32 bits)
    int size = sizeof(num) * 8;
    
    // Loop through all bits from the most significant bit (MSB) to the least significant bit (LSB)
    for(int i = size - 1; i >= 0; i--) {
        // Check if the current bit is set (1) or not (0)
        if((num >> i) & 1)
            printf("1");
        else
            printf("0");
    }
    
    printf("\n");
}

int main() {
    int num;
    

    scanf("%d", &num);
    
    printf(" ", num);
    
    // Call the function to print the binary representation
    printBinary(num);
    
    return 0;
}
