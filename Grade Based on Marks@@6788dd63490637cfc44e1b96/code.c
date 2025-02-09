#include <stdio.h>

void assignGrade(int marks) {
    // Checking the grade based on the marks
    if (marks >= 90) {
        printf("A\n");
    } else if (marks >= 80) {
        printf("B\n");
    } else if (marks >= 70) {
        printf("C\n");
    } else if (marks >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }
}

int main() {
    int marks;
    
    // Taking input for the marks

    scanf("%d", &marks);
    
    // Call function to assign grade based on marks
    assignGrade(marks);
    
    return 0;
}
