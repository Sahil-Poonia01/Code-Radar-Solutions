#include <stdio.h>

void display_day_of_week(int day) {
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid");
    }
}

int main() {
    int day;

    // Input from the user
   
    scanf("%d", &day);

    // Display the corresponding day or Invalid
    display_day_of_week(day);

    return 0;
}
