#include <stdio.h>

int main() {
    int hunger;

    printf("Enter your hunger level (1 to 10): ");
    scanf("%d", &hunger);

    if(hunger >= 8) {
        printf("You are very hungry! Eat a full meal.\n");
    }
    else if(hunger >= 5) {
        printf("You can eat a heavy snack like sandwich or burger.\n");
    }
    else if(hunger >= 2) {
        printf("Eat a light snack like biscuits or fruits.\n");
    }
    else {
        printf("You are not hungry. No need to eat now.\n");
    }

    return 0;
}