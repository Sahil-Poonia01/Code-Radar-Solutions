#include <stdio.h>

int main() {
    int num1, num2;  // Variables to store the two numbers

    // Taking input for the two numbers

    scanf("%d", &num1);


    scanf("%d", &num2);

    // Checking if at least one number is greater than zero using the || operator
    if (num1 > 0 || num2 > 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
