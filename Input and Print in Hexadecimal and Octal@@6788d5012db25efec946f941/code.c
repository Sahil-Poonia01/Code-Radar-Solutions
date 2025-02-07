#include <stdio.h>

int main() {
    int num; // Variable to store the integer


    
    // Taking input using scanf
    scanf("%d", &num);

    // Printing the hexadecimal and octal representations
    printf("The hexadecimal representation is: %X\n", num);  // %X for uppercase hexadecimal
    printf("The octal representation is: %o\n", num);        // %o for octal

    return 0;
}

