#include <stdio.h>

void check_even_or_odd(int num) {
    // Use integer division and compare with the expected result
    int result = num / 2;
    
    // Check if the division result, when multiplied by 2, gives the original number
    if (num == result * 2) {
        printf("Even", num);
    } else {
        printf("Odd", num);
    }
}

int main() {
    int num;
\
    scanf("%d", &num);

    check_even_or_odd(num);

    return 0;
}
