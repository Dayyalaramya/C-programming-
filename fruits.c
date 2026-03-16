#include <stdio.h>

int main() {
    int fruits;

    printf("Enter number of fruits you eat daily: ");
    scanf("%d", &fruits);

    if(fruits >= 2) {
        printf("You have healthy eating habits.");
    }
    else {
        printf("You should eat more fruits to stay healthy.");
    }

    return 0;
}