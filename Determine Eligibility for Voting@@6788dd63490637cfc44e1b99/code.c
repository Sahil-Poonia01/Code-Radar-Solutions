#include <stdio.h>

void check_voting_eligibility(int age) {
    if (age >= 18) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }
}

int main() {
    int age;
    

    scanf("%d", &age);

    check_voting_eligibility(age);

    return 0;
}
