//2.WAP to find the sum of all the elements in an array of integers
#include<stdio.h>
int main()
{
    int array[5]= {1,2,3,4,5},sum=0,i;
    for (int i=0; i<5; i++)
    {
        sum=sum+array[i];
    }
    printf("the sum is:%d\n",sum);
    return 0;
}
