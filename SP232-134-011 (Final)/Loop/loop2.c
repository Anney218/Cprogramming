// A c program to print alphabets from a to z
#include<stdio.h>
int main()
{
    char ch;

    printf("Alphabets are: ");
    for( ch = 'a'; ch <='z'; ch++)
    {
        printf(" %c " ,ch);
    }
    return 0;
}
