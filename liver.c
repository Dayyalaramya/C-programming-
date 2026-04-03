#include <stdio.h>

int main() {
    int alcohol, fatigue;

    printf("Do you consume alcohol regularly? (1-Yes / 0-No): ");
    scanf("%d", &alcohol);

    printf("Do you feel frequent fatigue? (1-Yes / 0-No): ");
    scanf("%d", &fatigue);

    if(alcohol == 1 && fatigue == 1) {
        printf("High risk of liver problems. Consult a doctor.\n");
    }
    else if(alcohol == 1 || fatigue == 1) {
        printf("Moderate risk. Take care of your health.\n");
    }
    else {
        printf("Low risk. Stay healthy!\n");
    }

    return 0;
}