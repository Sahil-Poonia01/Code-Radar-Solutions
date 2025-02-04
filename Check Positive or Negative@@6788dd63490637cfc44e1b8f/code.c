#include <stdio.h>

int main() {
    float num;

    // Ask the user for input
  
    scanf("%f", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("Positive", num);
    }
    else if (num < 0) {
        printf("Negative", num);
    }
    else {
        printf("The number is zero.\n");
    }

    return 0;
}
