#include <stdio.h>

void check_freezing_temperature(float temperature) {
    if (temperature <= 0) {
        printf("The temperature is freezing or below freezing.\n");
    } else {
        printf("The temperature is above freezing.\n");
    }
}

int main() {
    float temperature;

    scanf("%f", &temperature);

    // Check if the temperature is freezing or above freezing
    check_freezing_temperature(temperature);

    return 0;
}
