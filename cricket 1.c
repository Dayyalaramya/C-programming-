#include <stdio.h>

int main() {
    int runs;

    printf("Enter runs scored by Sachin: ");
    scanf("%d", &runs);

    if(runs >= 100) {
        printf("Sachin scored a century!");
    }
    else if(runs >= 50) {
        printf("Sachin scored a half-century!");
    }
    else {
        printf("Sachin scored less than 50 runs.");
    }

    return 0;
}