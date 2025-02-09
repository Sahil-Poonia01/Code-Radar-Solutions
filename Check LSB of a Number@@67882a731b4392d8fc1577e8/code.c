#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Checking the LSB using bitwise AND with 1
    if (num & 1) {
        printf("The LSB of %d is set (1).\n", num);
    } else {
        printf("The LSB of %d is not set (0).\n", num);
    }

    return 0;
}
