#include <stdio.h>

void check_number_sign(int num) {
    if (num > 0) {
        printf("Positive", num);
    } else if (num < 0) {
        printf("Negative", num);
    } else {
        printf("%d is zero.\n", num);
    }
}

int main() {
    int num;

    scanf("%d", &num);

    check_number_sign(num);

    return 0;
}
