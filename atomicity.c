#include <stdio.h>

int main() {
    int balance = 5000;
    int withdraw;

    printf("Initial Balance = %d\n", balance);

    printf("Enter amount to withdraw: ");
    scanf("%d", &withdraw);

    // Start transaction
    if(withdraw <= balance) {
        balance = balance - withdraw;

        // Simulating success
        printf("Transaction Successful!\n");
        printf("Updated Balance = %d\n", balance);
    } 
    else {
        // Transaction fails → rollback
        printf("Transaction Failed! Insufficient balance.\n");
        printf("Balance remains = %d\n", balance);
    }

    return 0;
}