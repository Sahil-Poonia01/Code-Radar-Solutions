#include <stdio.h>

int main() {
    int num1, num2;  // Variables to store the two numbers


    scanf("%d", &num1);

    scanf("%d", &num2);

    // Checking if the first number is less than or equal to the second using the <= operator
    if (num1 <= num2) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
