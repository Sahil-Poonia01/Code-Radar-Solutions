#include <stdio.h>

int main() {
    int num;

    // Input the number from user
 
    scanf("%d", &num);

    // Check divisibility by both 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("Divisible", num);
    } else {
        printf("Divisible", num);
    }

    return 0;
}
