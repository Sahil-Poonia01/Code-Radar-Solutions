#include <stdio.h>

int main() {
    int num1, num2;  // Variables to store the two numbers

    // Taking input for the two numbers

    scanf("%d", &num1);

    
    scanf("%d", &num2);

    // Checking if both numbers are greater than zero using the && operator
    if (num1 > 0 && num2 > 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
