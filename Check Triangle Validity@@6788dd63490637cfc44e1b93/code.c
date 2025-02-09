#include <stdio.h>

int isValidTriangle(int a, int b, int c) {
    // Check the triangle inequality theorem
    if (a + b > c && b + c > a && c + a > b) {
        return 1; // Valid triangle
    } else {
        return 0; // Invalid triangle
    }
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    
    // Check if the sides form a valid triangle
    if (isValidTriangle(a, b, c)) {
        printf("Valid");
    } else {
        printf("Invalid");
    }
    
    return 0;
}
