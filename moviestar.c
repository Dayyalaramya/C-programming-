#include <stdio.h>

int main() {
    int rating;

    printf("Enter rating of Shah Rukh Khan's movie (out of 10): ");
    scanf("%d", &rating);

    if(rating >= 8) {
        printf("Blockbuster movie!\n");
    }
    else if(rating >= 5) {
        printf("Average movie.\n");
    }
    else {
        printf("Flop movie.\n");
    }

    return 0;
}