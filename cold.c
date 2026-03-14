#include <stdio.h>

int main() {
    float temperature;

    printf("Enter body temperature: ");
    scanf("%f", &temperature);

    if(temperature < 36.5) {
        printf("You may have a cold.");
    }
    else {
        printf("Temperature is normal.");
    }

    return 0;
}