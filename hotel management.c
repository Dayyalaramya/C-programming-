#include <stdio.h>

int main() {
    int choice, days;
    float rent, total;

    printf("Welcome to Hotel Booking System\n");
    printf("1. Standard Room - 1000 per day\n");
    printf("2. Deluxe Room   - 2000 per day\n");
    printf("3. Suite Room    - 3000 per day\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter number of days: ");
    scanf("%d", &days);

    if(choice == 1) {
        rent = 1000;
    }
    else if(choice == 2) {
        rent = 2000;
    }
    else if(choice == 3) {
        rent = 3000;
    }
    else {
        printf("Invalid choice\n");
        return 0;
    }

    total = rent * days;

    if(total > 5000) {
        printf("You got a discount of 10%%!\n");
        total = total * 0.9;
    }

    printf("Total bill = %.2f\n", total);

    return 0;
}