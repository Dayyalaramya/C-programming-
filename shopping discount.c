#include <stdio.h>

int main() {
    float amount, discount, finalAmount;

    // Input
    printf("Enter total shopping amount: ");
    scanf("%f", &amount);

    // Discount conditions
    if(amount >= 5000) {
        discount = amount * 0.20;  // 20% discount
    }
    else if(amount >= 3000) {
        discount = amount * 0.10;  // 10% discount
    }
    else {
        discount = 0;  // No discount
    }

    finalAmount = amount - discount;

    // Output
    printf("Total Amount: %.2f\n", amount);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    return 0;
}