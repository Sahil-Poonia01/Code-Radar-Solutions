#include <stdio.h>

int main() {
    double num;  // Variable to store the double precision floating-point number

    // Taking double precision floating point input from the user

    scanf("%lf", &num);

    // Printing the double precision floating point number with 4 decimal places
    printf("You entered: %.4lf\n", num);

    return 0;
}
