#include <stdio.h>

void check_greater_or_equal(int num1, int num2) {
    if (num1 >= num2) {
        printf("Yes", num1, num2);
    } else {
        printf("No", num1, num2);
    }
}

int main() {
    int num1, num2;

    
    scanf("%d %d", &num1, &num2);

    check_greater_or_equal(num1, num2);

    return 0;
}
