#include <stdio.h>

int main() {
    int i, customers, total = 0;
    int maxCustomers = 0, busiestDay = 1;

    printf("Enter number of customers for 7 days:\n");

    for(i = 1; i <= 7; i++) {
        printf("Day %d: ", i);
        scanf("%d", &customers);

        total += customers;

        if(customers > maxCustomers) {
            maxCustomers = customers;
            busiestDay = i;
        }
    }

    printf("Total Customers in Week = %d\n", total);
    printf("Busiest Day = Day %d with %d customers\n", busiestDay, maxCustomers);

    if(total >= 500) {
        printf("Shop is very busy this week!\n");
    } else {
        printf("Customer flow is average.\n");
    }

    return 0;
}