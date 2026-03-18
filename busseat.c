#include <stdio.h>

int main() {
    int seats;

    printf("Enter number of available seats: ");
    scanf("%d", &seats);

    if(seats > 0) {
        printf("Seats are available\n");
    } 
    else {
        printf("No seats available\n");
    }

    return 0;
}