#include <stdio.h>

int main() {
    float radius, area;  // Variables to store the radius and area of the circle
    float PI = 3.14;      // Defining pi as 3.14

    scanf("%f", &radius);

    // Calculating the area of the circle
    area = PI * radius * radius;

    // Printing the calculated area with the specified format
    printf("Area: %.2f\n", area);

    return 0;
}
