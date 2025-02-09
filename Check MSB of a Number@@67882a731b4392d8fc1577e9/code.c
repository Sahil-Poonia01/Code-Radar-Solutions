#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Checking the MSB (Most Significant Bit) using a mask
    if (num & (1 << 31)) {
        printf("Set \n", num);
    } else {
        printf("Not Set \n", num);
    }

    return 0;
}
