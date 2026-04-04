#include <stdio.h>

int main() {
    int alcohol, jaundice, weightLoss;
    int score = 0;

    printf("Do you consume alcohol regularly? (1-Yes / 0-No): ");
    scanf("%d", &alcohol);

    printf("Do you have jaundice? (1-Yes / 0-No): ");
    scanf("%d", &jaundice);

    printf("Do you have sudden weight loss? (1-Yes / 0-No): ");
    scanf("%d", &weightLoss);

    // Calculate risk score
    score = alcohol + jaundice + weightLoss;

    if(score == 3) {
        printf("High risk of liver disease!\n");
    }
    else if(score == 2) {
        printf("Moderate risk. Please take care.\n");
    }
    else if(score == 1) {
        printf("Low risk. Maintain healthy habits.\n");
    }
    else {
        printf("Very low risk. You are healthy.\n");
    }

    return 0;
}