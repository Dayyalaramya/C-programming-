#include <stdio.h>

int main() {
    int fever, cough;

    // Input
    printf("Do you have fever? (1 = Yes, 0 = No): ");
    scanf("%d", &fever);

    printf("Do you have cough? (1 = Yes, 0 = No): ");
    scanf("%d", &cough);

    // Condition
    if(fever == 1 && cough == 1) {
        printf("You may have COVID-19. Please consult a doctor.\n");
    } 
    else if(fever == 1 || cough == 1) {
        printf("You have mild symptoms. Stay safe and monitor your health.\n");
    } 
    else {
        printf("You are safe. No symptoms detected.\n");
    }

    return 0;
}