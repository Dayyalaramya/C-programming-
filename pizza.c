#include <stdio.h>

int main() {
    int quantity;
    float price = 199.0;  // price of one pizza
    float total;

    printf("Enter number of pizzas ordered: ");
    scanf("%d", &quantity);

    total = quantity * price;

    if(total >= 1000) {
        printf("You got a discount!\n");
        total = total - 100;   // discount
    }

    printf("Total bill amount = %.2f\n", total);

    return 0;
}