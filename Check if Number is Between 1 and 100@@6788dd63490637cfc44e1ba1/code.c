#include <stdio.h>

void check_range(int num) {
    if (num >= 1 && num <= 100) {
        printf("In Range", num);
    } else {
        printf("Out of Range", num);
    }
}

int main() {
    int num;

    scanf("%d", &num);

    check_range(num);

    return 0;
}
