#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    // Counting leading zeros using the built-in GCC function
    int leading_zeros = __builtin_clz(num); // GCC built-in function to count leading zeros

    // Output the result
    printf("%d\n",leading_zeros);

    return 0;
}
