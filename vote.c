#include <stdio.h>

int main() {
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age >= 18)
    {
    printf("You are eligible to vote");
    }
    else
    {
    printf("cannot vote");
    }

    return 0;
}