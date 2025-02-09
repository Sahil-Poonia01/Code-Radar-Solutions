#include <stdio.h>

int main() {
    int num1, num2;  // Variables to store the two numbers

    // Taking input for the two numbers
    
    scanf("%d", &num1);

    
    scanf("%d", &num2);

    // Checking if both numbers are greater than zero using the && operator
    if (num1 > 0 && num2 > 0) {
        printf("Both numbers are greater than zero.\n");
    } else {
        printf("One or both numbers are not greater than zero.\n");
    }

    return 0;
}
