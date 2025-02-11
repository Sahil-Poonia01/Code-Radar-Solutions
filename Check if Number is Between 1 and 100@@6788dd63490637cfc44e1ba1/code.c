#include <stdio.h>

void check_range(int num) {
    if (num >= 1 && num <= 100) {
        printf("%d is between 1 and 100.\n", num);
    } else {
        printf("%d is not between 1 and 100.\n", num);
    }
}

int main() {
    int num;

    scanf("%d", &num);

    check_range(num);

    return 0;
}
