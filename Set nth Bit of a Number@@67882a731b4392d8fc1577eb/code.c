#include <stdio.h>

void setNthBit(int *num, int n) {
    // Set the nth bit to 1
    *num = *num | (1 << n);
}

int main() {
    int num, n;
    
    // Taking input for the number and the bit position
    scanf("%d %d", &num, &n);
    
    // Call the function to set the nth bit
    setNthBit(&num, n);
    
    // Output the modified number
    printf("%d\n", num);
    
    return 0;
}
