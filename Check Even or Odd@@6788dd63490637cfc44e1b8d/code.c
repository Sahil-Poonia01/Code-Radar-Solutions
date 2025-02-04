#include <stdio.h>

int main() {
    int number;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("Even", number);
    } else {
        printf("Odd", number);
    }

    return 0;
}