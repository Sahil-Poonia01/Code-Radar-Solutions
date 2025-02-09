#include <stdio.h>

int main() {
    int num1;  // Variable to store the number

 
    scanf("%d", &num1);

    // Checking if the first number is not greater than zero using the ! operator
    if (!(num1 > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
