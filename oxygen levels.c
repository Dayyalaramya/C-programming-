#include <stdio.h>

int main() {
    float temperature, oxygen;

    // Input
    printf("Enter body temperature (in °C): ");
    scanf("%f", &temperature);

    printf("Enter oxygen level (in %%): ");
    scanf("%f", &oxygen);

    // Condition
    if(temperature > 38 && oxygen < 95) {
        printf("High risk! Please consult a doctor immediately.\n");
    }
    else if(temperature > 37 || oxygen < 96) {
        printf("Mild symptoms. Take rest and monitor regularly.\n");
    }
    else {
        printf("You are healthy. Stay safe!\n");
    }

    return 0;
}