#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    int year;
    scanf("%d", &year);
    if (isLeapYear(year)) {
        printf("Leap Year", year);
    } else {
        printf("Not a Leap Year.\n", year);
    }

    return 0;
}
