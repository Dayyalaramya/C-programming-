#include <stdio.h>

int main() {
    int i;
    float hours, total = 0, average;

    printf("Enter study hours for 7 days:\n");

    for(i = 1; i <= 7; i++) {
        printf("Day %d: ", i);
        scanf("%f", &hours);
        total += hours;
    }

    average = total / 7;

    printf("Total Study Hours = %.2f\n", total);
    printf("Average Study Hours = %.2f\n", average);

    if(average >= 5) {
        printf("Good Study Habit\n");
    } else {
        printf("Need Improvement\n");
    }

    return 0;
}