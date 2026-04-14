#include <stdio.h>

int main() 
{
    int painLevel;

    // Taking input from user
    printf("Enter your stomach pain level (1 to 10): ");
    scanf("%d", &painLevel);

    // Checking condition
    if(painLevel >= 1 && painLevel <= 3)
    {
        printf("Mild pain. Take rest and drink warm water.\n");
    }
    else if(painLevel >= 4 && painLevel <= 6)
    {
        printf("Moderate pain. Take medicine and avoid junk food.\n");
    }
    else if(painLevel >= 7 && painLevel <= 10)
    {
        printf("Severe pain. Please consult a doctor immediately.\n");
    }
    else
    {
        printf("Invalid input!\n");
    }

    return 0;
}