#include <stdio.h>

int main() {
    int num1, num2;  // Variables to store the two numbers

 
    scanf("%d", &num1);

   
    scanf("%d", &num2);

    // Checking if the first number is greater than the second
    if (num1 > num2) {
        printf("The first number (%d) is greater than the second number (%d).\n", num1, num2);
    } else {
        printf("The first number (%d) is not greater than the second number (%d).\n", num1, num2);
    }

    return 0;
}
