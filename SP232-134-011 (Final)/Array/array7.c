//7 to reverse an array of integers
#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter 5 numbers:");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("reverse array:  ");

    for (int i = 4; i>=0; i--)
    {
        printf("%d ",arr[i]);

    }



    return 0;
}
