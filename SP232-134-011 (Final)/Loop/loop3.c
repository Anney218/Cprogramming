// A c program to print ASCII values of all character
#include<stdio.h>
int main()
{
    char ch;

    printf("Alphabets are: ");
    for( ch = 'A'; ch <='z'; ch++)
    {
        if(ch>='a' && ch<='z' || ch>='a' && ch <='z')
        {
            printf(" %d ",ch);
        }
    }


    return 0;
}

