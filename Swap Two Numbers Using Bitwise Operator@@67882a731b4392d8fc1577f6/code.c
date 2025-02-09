#include <stdio.h>

void swap(int *a, int *b) {
    // XOR swap algorithm
    *a = *a ^ *b;  // Step 1: a = a ^ b
    *b = *a ^ *b;  // Step 2: b = a ^ b
    *a = *a ^ *b;  // Step 3: a = a ^ b
}

int main() {
    int num1, num2;

    scanf("%d", &num1);

    scanf("%d", &num2);
    
    // Output before swap
    printf("%d\n", num1, num2);
    
    // Call the swap function
    swap(&num1, &num2);
    
    // Output the swapped values
    printf("%d\n", num1, num2);
    
    return 0;
}
