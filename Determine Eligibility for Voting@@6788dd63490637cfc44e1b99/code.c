#include <stdio.h>

void check_voting_eligibility(int age) {
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
}

int main() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);

    check_voting_eligibility(age);

    return 0;
}
