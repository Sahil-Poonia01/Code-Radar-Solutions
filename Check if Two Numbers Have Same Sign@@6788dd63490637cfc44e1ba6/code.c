#include <stdio.h>

void check_same_sign(int num1, int num2) {
    if ((num1 > 0 && num2 > 0) || (num1 < 0 && num2 < 0)) {
        printf("The numbers %d and %d have the same sign.\n", num1, num2);
    } else {
        printf("The numbers %d and %d do not have the same sign.\n", num1, num2);
    }
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // Check if they have the same sign
    check_same_sign(num1, num2);

    return 0;
}
