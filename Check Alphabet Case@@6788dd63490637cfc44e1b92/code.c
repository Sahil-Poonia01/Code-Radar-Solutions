#include <stdio.h>
#include <ctype.h>  // For isupper() and islower() functions

int main() {
    char ch;

    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase
    if (isupper(ch)) {
        printf("Uppercase", ch);
    } else if (islower(ch)) {
        printf("Lowercase", ch);
    } else {
        printf("Not an alphabet", ch);
    }

    return 0;
}
