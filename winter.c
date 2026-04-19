#include <stdio.h>

int main() {
    int i, coldDays = 0;
    float temp;

    printf("Enter temperature for 7 days:\n");

    for(i = 1; i <= 7; i++) {
        printf("Day %d: ", i);
        scanf("%f", &temp);

        if(temp < 20) {  // condition for winter (cold day)
            coldDays++;
        }
    }

    printf("Number of Cold Days = %d\n", coldDays);

    if(coldDays >= 4) {
        printf("It was a cold winter week!\n");
    } else {
        printf("Winter was mild.\n");
    }

    return 0;
}