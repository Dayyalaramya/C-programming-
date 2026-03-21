#include <stdio.h>

int main() {
    int beds;

    printf("Enter available beds: ");
    scanf("%d", &beds);

    if(beds > 0) {
        printf("Beds available. Admit patient.\n");
    }
    else {
        printf("No beds available.\n");
    }

    return 0;
}