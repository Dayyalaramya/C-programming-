#include <stdio.h>
#include <string.h>

int main() {
    char patient1[50], patient2[50];
    int length;

    // Input strings
    printf("Enter first patient name: ");
    scanf("%s", patient1);

    printf("Enter second patient name: ");
    scanf("%s", patient2);

    // String length
    length = strlen(patient1);
    printf("\nLength of first patient name: %d", length);

    // String copy
    char copyName[50];
    strcpy(copyName, patient1);
    printf("\nCopied name: %s", copyName);

    // String comparison
    if (strcmp(patient1, patient2) == 0) {
        printf("\nBoth patient names are same.");
    } else {
        printf("\nPatient names are different.");
    }

    return 0;
}