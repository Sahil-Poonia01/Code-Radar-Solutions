#include <stdio.h>

void check_voting_eligibility(int age, int citizenship) {
    if (age >= 18 && citizenship == 1) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }
}

int main() {
    int age, citizenship;

    // Get input from user
    
    scanf("%d", &age);
 
    scanf("%d", &citizenship);

    // Check eligibility
    check_voting_eligibility(age, citizenship);

    return 0;
}
