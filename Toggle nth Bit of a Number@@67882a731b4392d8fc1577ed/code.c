#include <stdio.h>

int main() {
    int num, n;


    scanf("%d", &num);

    scanf("%d", &n);

    // Toggle the nth bit using XOR with a mask
    num = num ^ (1 << n);

    // Printing the new number after toggling the nth bit
    printf("%d\n", num);

    return 0;
}
