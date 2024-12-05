// A c program to find the size of data types
#include<stdio.h>
int main()
{
    int n;
    char ch;
    float f;
    double d;

    printf("The size of integer data type is: %d\n",sizeof(n));
    printf("The size of character data type is: %d\n",sizeof(ch));
    printf("The size of floating data type is: %d\n",sizeof(f));
    printf("The size of double floating data type is: %d\n",sizeof(d));

    return 0;
}
