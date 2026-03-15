#include <stdio.h>

int main() {
    int balance = 5000;
    int withdraw;

    printf("Enter amount to withdraw: ");
    scanf("%d", &withdraw);

    if(withdraw <= balance) {
        balance = balance - withdraw;
        printf("Transaction Successful\n");
        printf("Remaining Balance: %d", balance);
    }
    else {
        printf("Insufficient Balance");
    }

    return 0;
}