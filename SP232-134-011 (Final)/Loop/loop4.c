// A c program to print multiplication table of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a range : ");
    scanf("%d",&n);

    for(int j=1; j<=n;j++){
    for(int i=1; i<=10;i++)

    {
        printf("%d X %d = %d\n",j,i,j*i);

    }
    printf("\n");
    }
    return 0;
}

