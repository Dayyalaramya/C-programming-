#include <stdio.h>

int main() {
    int tickets;

    printf("Enter number of tickets sold for Allu Arjun's movie: ");
    scanf("%d", &tickets);

    if(tickets >= 1000) {
        printf("Super Hit Movie!\n");
    }
    else if(tickets >= 500) {
        printf("Hit Movie!\n");
    }
    else {
        printf("Average or Flop Movie.\n");
    }

    return 0;
}