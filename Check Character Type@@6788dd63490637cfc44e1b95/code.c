#include <stdio.h>
#include <ctype.h>  // For isdigit and isalpha functions

void checkCharacterType(char c) {
    // Check if the character is a digit
    if (isdigit(c)) {
        printf("Digit\n");
    }
    // Check if the character is an alphabet letter
    else if (isalpha(c)) {
        // Check if the character is a vowel
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || 
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    // If the character is neither a digit nor an alphabet letter
    else {
        printf("Special Character\n");
    }
}

int main() {
    char c;

    scanf("%c", &c);
    
    // Call function to check the type of character
    checkCharacterType(c);
    
    return 0;
}
