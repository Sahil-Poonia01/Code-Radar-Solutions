#include <stdio.h>

void compare_two_numbers(int num1, int num2) {
    if (num1 == num2) {
        printf("%d and %d are equal.\n", num1, num2);
    } else if (num1 > num2) {
        printf("%d is larger than %d.\n", num1, num2);
    } else {
        printf("%d is larger than %d.\n", num2, num1);
    }
}

int main() {
    int num1, num2;

  
    scanf("%d %d", &num1, &num2);

    compare_two_numbers(num1, num2);

    return 0;
}
