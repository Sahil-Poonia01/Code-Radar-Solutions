#include <stdio.h>

int main() {
    int num1, num2, num3; // Variables to store the three integers
    float average; // Variable to store the average

    
    // Taking three integers as input using scanf
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculating the average of the three integers
    average = (num1 + num2 + num3) / 3.0;  // Use 3.0 to ensure floating-point division

    // Printing the average using printf
    printf("The average is: %.2f\n", average); // Displaying with 2 decimal places

    return 0;
}
