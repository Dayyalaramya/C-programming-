#include <stdio.h>

int main()
{
    int seats[10] = {1,0,1,0,1,1,0,0,1,0};
    int i;

    printf("Bus Seat Status:\n");
    printf("1 = Booked, 0 = Vacant\n\n");

    for(i = 0; i < 10; i++)
    {
        if(seats[i] == 0)
        {
            printf("Seat %d is Vacant\n", i + 1);
        }
        else
        {
            printf("Seat %d is Booked\n", i + 1);
        }
    }

    return 0;
}