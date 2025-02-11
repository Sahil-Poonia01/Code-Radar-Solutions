#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;  // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}

int main() {
    int num;

    scanf("%d", &num);

    if (is_prime(num)) {
        printf("Prime", num);
    } else {
        printf("Not Prime", num);
    }

    return 0;
}
