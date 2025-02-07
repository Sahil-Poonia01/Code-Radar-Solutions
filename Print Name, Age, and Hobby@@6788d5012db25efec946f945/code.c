#include <stdio.h>

int main() {
    char name[100], hobby[100]; // Arrays to store the user's name and favorite hobby
    int age; // Variable to store the user's age

   
    scanf("%s", name); // Taking the name input

    scanf("%d", &age); // Taking the age input

    // Clear the newline character left by scanf after reading age
    getchar();

 
    fgets(hobby, sizeof(hobby), stdin); // Taking the hobby input with spaces

    // Printing the input data
    printf("\nUser Details:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Favorite hobby: %s", hobby); // hobby already includes the newline from fgets

    return 0;
}
