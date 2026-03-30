#include <stdio.h>

int main() {
    int i, rainyDays = 0;
    int rain;

    printf("Enter rainfall status for 7 days (1 = Rainy, 0 = Not Rainy):\n");

    for(i = 1; i <= 7; i++) {
        printf("Day %d: ", i);
        scanf("%d", &rain);

        if(rain == 1) {
            rainyDays++;
        }
    }

    printf("Total Rainy Days = %d\n", rainyDays);

    if(rainyDays > 3) {
        printf("It was a rainy week!\n");
    } else {
        printf("Less rain this week.\n");
    }

    return 0;
}