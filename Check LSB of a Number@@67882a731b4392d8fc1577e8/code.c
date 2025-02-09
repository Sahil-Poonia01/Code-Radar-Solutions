#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Checking the LSB using bitwise AND with 1
    if (num & 1) {
        printf("Set \n", num);
    } else {
        printf("Not Set \n", num);
    }

    return 0;
}
