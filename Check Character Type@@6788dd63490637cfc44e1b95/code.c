#include <stdio.h>
#include <ctype.h>  // For isdigit and isalpha functions

void checkCharacterType(char c) {
    // Check if the character is a digit
    if (isdigit(c)) {
        printf("The character is a digit.\n");
    }
    // Check if the character is an alphabet letter
    else if (isalpha(c)) {
        // Check if the character is a vowel
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || 
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("The character is a vowel.\n");
        } else {
            printf("The character is a consonant.\n");
        }
    }
    // If the character is neither a digit nor an alphabet letter
    else {
        printf("The character is a special character.\n");
    }
}

int main() {
    char c;
    
    // Taking input for the character
    printf("Enter a character: ");
    scanf("%c", &c);
    
    // Call function to check the type of character
    checkCharacterType(c);
    
    return 0;
}
