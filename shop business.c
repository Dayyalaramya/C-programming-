#include <stdio.h>

int main() {
    int i;
    float sale, total = 0, maxSale = 0;
    int bestDay = 1;

    printf("Enter sales for 7 days:\n");

    for(i = 1; i <= 7; i++) {
        printf("Day %d: ", i);
        scanf("%f", &sale);

        total += sale;

        if(sale > maxSale) {
            maxSale = sale;
            bestDay = i;
        }
    }

    printf("Total Weekly Sales = %.2f\n", total);
    printf("Highest Sale = %.2f on Day %d\n", maxSale, bestDay);

    if(total >= 5000) {
        printf("Good business this week!\n");
    } else {
        printf("Sales need improvement.\n");
    }

    return 0;
}