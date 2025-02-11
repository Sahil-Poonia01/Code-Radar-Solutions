#include <stdio.h>

void compare_two_numbers(int num1, int num2) {
    if (num1 == num2) {
        printf("Equal", num1, num2);
    } else if (num1 > num2) {
        printf("First", num1, num2);
    } else {
        printf("Second", num2, num1);
    }
}

int main() {
    int num1, num2;

  
    scanf("%d %d", &num1, &num2);

    compare_two_numbers(num1, num2);

    return 0;
}
