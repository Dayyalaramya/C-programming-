#include <stdio.h>

int main() {
    int age;

    printf("Enter patient age: ");
    scanf("%d", &age);

    if(age < 12) {
        printf("Patient is a Child.\n");
    }
    else if(age >= 12 && age < 60) {
        printf("Patient is an Adult.\n");
    }
    else {
        printf("Patient is a Senior Citizen.\n");
    }

    return 0;
}