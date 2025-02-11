#include <stdio.h>

void check_freezing_temperature(float temperature) {
    if (temperature <= 0) {
        printf("Freezing");
    } else {
        printf("Above Freezing");
    }
}

int main() {
    float temperature;

    scanf("%f", &temperature);

    // Check if the temperature is freezing or above freezing
    check_freezing_temperature(temperature);

    return 0;
}
