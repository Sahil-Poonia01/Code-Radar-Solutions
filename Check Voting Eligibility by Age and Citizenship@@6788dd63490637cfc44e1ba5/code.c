#include <stdio.h>

void check_voting_eligibility(int age, int citizenship) {
    if (age >= 18 && citizenship == 1) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
}

int main() {
    int age, citizenship;

    // Get input from user
    
    scanf("%d", &age);
    printf("Enter your citizenship status (1 for citizen, 0 for non-citizen): ");
    scanf("%d", &citizenship);

    // Check eligibility
    check_voting_eligibility(age, citizenship);

    return 0;
}
