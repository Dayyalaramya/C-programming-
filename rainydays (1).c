#include <stdio.h>

int main() {
    int i, maxDay = 1;
    float rainfall, maxRain = 0;

    printf("Enter rainfall (in mm) for 7 days:\n");

    for(i = 1; i <= 7; i++) {
        printf("Day %d: ", i);
        scanf("%f", &rainfall);

        if(rainfall > maxRain) {
            maxRain = rainfall;
            maxDay = i;
        }
    }

    printf("Highest Rainfall = %.2f mm\n", maxRain);
    printf("Occurred on Day %d\n", maxDay);

    if(maxRain > 100) {
        printf("Heavy Rain Alert!\n");
    } else if(maxRain > 50) {
        printf("Moderate Rain\n");
    } else {
        printf("Light Rain\n");
    }

    return 0;
}