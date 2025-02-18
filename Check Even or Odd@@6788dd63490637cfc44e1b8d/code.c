#include <stdio.h>

int main() {
    int number;

    // Ask user for input
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd", number);
    }

    return 0;
}