#include <stdio.h>

int main() {
    int choice, pin = 1234, enteredPin;
    float balance = 5000, amount;

    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if(enteredPin != pin) {
        printf("Incorrect PIN\n");
        return 0;
    }

    printf("\nATM Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Your Balance = %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Updated Balance = %.2f\n", balance);
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if(amount > balance) {
                printf("Insufficient Balance\n");
            } else {
                balance -= amount;
                printf("Updated Balance = %.2f\n", balance);
            }
            break;

        case 4:
            printf("Thank you for using ATM\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}