#include <stdio.h>

int main() {
    int icuBeds;

    printf("Enter available ICU beds: ");
    scanf("%d", &icuBeds);

    if(icuBeds > 0) {
        printf("ICU bed available. Admit patient to ICU.\n");
    }
    else {
        printf("No ICU beds available. Refer to another hospital.\n");
    }

    return 0;
}