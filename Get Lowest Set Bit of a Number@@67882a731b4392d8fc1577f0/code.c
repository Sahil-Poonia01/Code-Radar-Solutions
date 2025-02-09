#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Find the position of the lowest set bit
    int position = -1;
    
    if (num != 0) {
        position = __builtin_ctz(num); // Built-in function to count trailing zeros
    }

    // Printing the result
    if (position == -1) {
        printf("The number has no set bits (it's zero).\n");
    } else {
        printf("%d\n", position);
    }

    return 0;
}
