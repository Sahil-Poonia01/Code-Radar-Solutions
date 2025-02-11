#include <stdio.h>

void check_square(int num1, int num2) {
    if (num1 == num2 * num2) {
        printf("%d is the square of %d.\n", num1, num2);
    } else {
        printf("%d is not the square of %d.\n", num1, num2);
    }
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    check_square(num1, num2);

    return 0;
}
