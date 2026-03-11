#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    int i, at = 0, dot = 0;

    printf("Enter your email: ");
    scanf("%s", email);

    for(i = 0; i < strlen(email); i++) {
        if(email[i] == '@') {
            at = 1;
        }
        if(email[i] == '.') {
            dot = 1;
        }
    }

    if(at && dot) {
        printf("Email is valid\n");
    } else {
        printf("Invalid email\n");
    }

    return 0;
}