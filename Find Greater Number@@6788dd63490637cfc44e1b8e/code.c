#include <stdio.h>

int main() {
    int num1, num2;

    // Ask user for input
   
    scanf("%d", &num1);

  
    scanf("%d", &num2);

    // Compare the two numbers and print the greater one
    if (num1 > num2) {
        printf("%d ", num1, num2);
    } else if (num2 > num1) {
        printf("%d ", num2, num1);
    } else {
        printf("%d ");
    }

    return 0;
}

