#include <stdio.h>

int main() {
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num >= 0)
    {
    printf("The number is whole number");
    }
    else
    {
    printf("the number is not whole number");
    }

    return 0;
}