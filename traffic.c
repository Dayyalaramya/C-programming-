#include <stdio.h>

int main() {
    char signal;

    printf("Enter traffic signal color (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &signal);

    if(signal == 'R' || signal == 'r') {
        printf("Stop the vehicle\n");
    }
    else if(signal == 'Y' || signal == 'y') {
        printf("Get Ready\n");
    }
    else if(signal == 'G' || signal == 'g') {
        printf("Go\n");
    }
    else {
        printf("Invalid traffic signal\n");
    }

    return 0;
}