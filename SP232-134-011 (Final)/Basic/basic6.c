// A c program that takes hours and minutes as input and calculates the total number of minutes
#include<stdio.h>
int main()
{
    int hours,minutes,total_minutes;
    printf("Enter hours: ");
    scanf("%d",&hours);
    printf("Enter minutes: ");
    scanf("%d",&minutes);
    total_minutes = (hours*60)+ minutes;
    printf("Total minutes : %d\n",total_minutes);

    return 0;
}
