#include <stdio.h>

void check_triangle_type(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid sides!\n");
        return;
    }

    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Check for Equilateral triangle
        if (a == b && b == c) {
            printf("Equilateral");
        }
        // Check for Isosceles triangle
        else if (a == b || b == c || a == c) {
            printf("Isosceles");
        }
        // Check for Scalene triangle
        else {
            printf("Scalene");
        }
    } else {
        printf("The sides do not form a valid triangle.\n");
    }
}

int main() {
    int a, b, c;
    

    scanf("%d %d %d", &a, &b, &c);

    check_triangle_type(a, b, c);

    return 0;
}
