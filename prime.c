#include <stdio.h>
#include <math.h>

int main() {
    int num, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not a Prime Number");
        return 0;
    }

    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}