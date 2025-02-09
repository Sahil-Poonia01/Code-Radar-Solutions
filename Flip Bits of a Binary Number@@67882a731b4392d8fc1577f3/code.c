#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    // Perform bitwise NOT to flip the bits
    int flipped = ~num;

    // Output the flipped number in decimal
    printf("%d\n", flipped);

    return 0;
}
