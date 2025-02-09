#include <stdio.h>

void assignGrade(int marks) {
    // Checking the grade based on the marks
    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else if (marks >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
}

int main() {
    int marks;
    
    // Taking input for the marks
    printf("Enter the marks: ");
    scanf("%d", &marks);
    
    // Call function to assign grade based on marks
    assignGrade(marks);
    
    return 0;
}
