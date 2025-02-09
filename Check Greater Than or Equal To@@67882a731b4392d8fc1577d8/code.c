#include <stdio.h>

int main() {
    int num1, num2;  // Variables to store the two numbers

  
    scanf("%d", &num1);

    
    scanf("%d", &num2);

    // Checking if the first number is greater than or equal to the second and printing true/false
    if (num1 >= num2) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
