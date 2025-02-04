#include <stdio.h>

int main() {
    int num1, num2;

    // Ask user for input
    printf("Enter the first integer: ");
    scanf("%d", &num1);


    scanf("%d", &num2);

    // Compare the two numbers and print the greater one
    if (num1 > num2) {
        printf("%d is greater than %d.\n", num1, num2);
    } else if (num2 > num1) {
        printf("%d is greater than %d.\n", num2, num1);
    }

    return 0;
}
