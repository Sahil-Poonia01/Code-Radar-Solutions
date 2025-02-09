#include <stdio.h>

int main() {
    int num1, num2;  // Variables to store the two numbers

    scanf("%d", &num1);

    scanf("%d", &num2);

    // Checking if neither of the two numbers is greater than zero
    if (!(num1 > 0) && !(num2 > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
