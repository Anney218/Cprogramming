
//3 WAP to find the largest and smallest elements in an array of integers
#include<stdio.h>
int main()
{
    int array[100], n, i;
    printf("How many numbers numbers= ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {

        scanf("%d", &array[i]);
        printf("\n");


    }
    int max= array[0];
    int max2= array[0];

    for(i=1; i<n; i++)
    {

        if(max < array[i]){

        max = array[i];}
        {
        if(max2 > array[i]){

        max2 = array[i];}
        }


    }
    printf("The largest number is= %d\nThe smallest Number is= %d\n", max, max2);



    return 0;
}
