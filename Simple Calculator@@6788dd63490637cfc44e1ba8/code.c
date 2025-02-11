#include <stdio.h>

// Function to perform the operation based on the operator
void simple_calculator(float num1, float num2, char operator) {
    float result;

    // Check for the operator and perform the corresponding operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
            
            }
            break;
        default:
            // Error message for invalid operator
         
    }
}

int main() {
    float num1, num2;
    char operator;

    // Input from the user

    if (scanf("%f", &num1) != 1) {
      
        return 1;
    }

  
    if (scanf(" %c", &operator) != 1) {
     
        return 1;
    }

    if (scanf("%f", &num2) != 1) {
   
        return 1;
    }

    // Perform the calculation based on the operator
    simple_calculator(num1, num2, operator);

    return 0;
}
