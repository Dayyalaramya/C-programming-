#include <stdio.h>

int main() {
    int girls, beds = 5;

    printf("Enter number of girls: ");
    scanf("%d", &girls);

    if(girls <= beds) {
        printf("Beds are available\n");
        printf("Vacant beds: %d", beds - girls);
    }
    else {
        printf("No vacancy in hostel");
    }

    return 0;
}