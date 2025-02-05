#include <stdio.h>

int main() {
    int num;

    // Input the number from user
 
    scanf("%d", &num);

    // Check divisibility by both 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("%d is divisible by both 5 and 11.\n", num);
    } else {
        printf("%d is not divisible by both 5 and 11.\n", num);
    }

    return 0;
}
