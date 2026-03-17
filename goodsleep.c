#include <stdio.h>

int main() {
    int hours;

    printf("Enter number of hours you sleep daily: ");
    scanf("%d", &hours);

    if(hours >= 7 && hours <= 9) {
        printf("You have a healthy sleep routine.");
    }
    else if(hours < 7) {
        printf("You should sleep more for good health.");
    }
    else {
        printf("You are sleeping too much.");
    }

    return 0;
}