#include <stdio.h>

void check_multiple(int num1, int num2) {
    if (num2 == 0) {
        printf("Division by zero is not allowed.\n");
        return;
    }

    if (num1 % num2 == 0) {
        printf("%d is a multiple of %d.\n", num1, num2);
    } else {
        printf("%d is not a multiple of %d.\n", num1, num2);
    }
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    check_multiple(num1, num2);

    return 0;
}
