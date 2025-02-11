#include <stdio.h>

int main() {
    int month;

    scanf("%d", &month);

    // Determine the number of days in the month
    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("31");
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("30");
            break;
        case 2:  // February
            printf("28");
            break;
        default:
            printf("Error: Invalid month number\n");
    }

    return 0;
}
