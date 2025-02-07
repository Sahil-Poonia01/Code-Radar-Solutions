#include <stdio.h>

int main() {
    char str1[100], str2[100]; // Arrays to store two strings


    scanf("%s", str1); // Reading the first string
    
    printf("Enter the second string: ");
    scanf("%s", str2); // Reading the second string

    // Printing the strings
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    return 0;
}
