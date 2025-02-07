#include <stdio.h>

int main() {
    float num1, num2, product; // Variables to store the two numbers and their product

    
    
    // Taking two floating-point numbers as input using scanf
    scanf("%f %f", &num1, &num2);

    // Calculating the product of the two numbers
    product = num1 * num2;

    // Printing the product using printf
    printf("Product: %.2f\n", product);

    return 0;
}
