#include <stdio.h>

int findMax(int a, int b, int c) {
    // Compare a, b, and c to find the maximum
    if (a >= b && a >= c) {
        return a;  // a is the largest
    } else if (b >= a && b >= c) {
        return b;  // b is the largest
    } else {
        return c;  // c is the largest
    }
}

int main() {
    int a, b, c;
 
    scanf("%d %d %d", &a, &b, &c);
    
    // Find and print the maximum of the three numbers
    printf("%d\n", findMax(a, b, c));
    
    return 0;
}
