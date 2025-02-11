#include <stdio.h>

void check_divisibility(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } else if (num % 3 == 0) {
        printf("%d is divisible by 3.\n", num);
    } else if (num % 5 == 0) {
        printf("%d is divisible by 5.\n", num);
    } else {
        printf("%d is divisible by neither 3 nor 5.\n", num);
    }
}

int main() {
    int num;

    scanf("%d", &num);

    check_divisibility(num);

    return 0;
}
