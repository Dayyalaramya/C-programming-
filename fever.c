#include <stdio.h>

int main() {
    float temperature;

    printf("Enter body temperature in Celsius: ");
    scanf("%f", &temperature);

    if(temperature >= 38) {
        printf("You have fever");
    }
    else {
        printf("You do not have fever");
    }

    return 0;
}