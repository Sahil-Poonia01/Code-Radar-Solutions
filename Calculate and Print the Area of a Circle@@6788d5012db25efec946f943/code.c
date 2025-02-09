#include <stdio.h>

int main() {
    float radius, area;  // Variables to store the radius and area of the circle
    float PI = 3.14;      // Defining pi as 3.14

    // Taking input for radius

    scanf("%f", &radius);

    // Calculating the area of the circle
    area = PI * radius * radius;

    // Printing the calculated area
    printf("Area %.2f is: %.2f\n", radius, area);

    return 0;
}


