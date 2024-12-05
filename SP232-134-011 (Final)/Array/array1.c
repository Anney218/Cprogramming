
//WAP to initializes an array of integers with 5 elements and then print each element in the array
#include<stdio.h>
int main(){
    int array[5]={1,2,3,4,5};
    printf("elements of the array:");
    printf("\n");

    for(int i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
