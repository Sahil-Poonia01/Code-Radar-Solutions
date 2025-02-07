#include <stdio.h>

int main() {
    float radius, area; // Variables to store the radius and area of the circle
    const float PI = 3.14; // Defining the value of PI as 3.14

    // Prompt user for input

    scanf("%f", &radius); // Taking the radius as input

    // Calculating the area of the circle
    area = PI * radius * radius;

    // Printing the area of the circle using printf
    printf("Area: %.2f\n", radius, area);

    return 0;
}
