#include<stdio.h>

int main() 
{
    int temperature,boolean;
    printf("enter the no of temperature:");
    scanf("%d",&temperature);
    printf("enter 1 for boolean\t 0 for not boolean\n");
    scanf("%d",&boolean);
    if (boolean)
    {
        if(temperature>=60&& temperature<=100)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else 
    {
        if(temperature>=60&&temperature<=90)
        {
            printf("true");
        }
        else 
        {
            printf("false");
        }
    }
    return 0;
}
    