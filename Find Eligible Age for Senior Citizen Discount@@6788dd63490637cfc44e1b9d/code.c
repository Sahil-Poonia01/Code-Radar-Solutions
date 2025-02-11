#include <stdio.h>

void check_senior_discount(int age) {
    if (age >= 60) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }
}

int main() {
    int age;

\
    scanf("%d", &age);

    check_senior_discount(age);

    return 0;
}
