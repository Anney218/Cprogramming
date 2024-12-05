// check the differences between pre, post, increment and decrement operators
#include<stdio.h>
int main()
{
    int a, b;
    a=5;
    b=10;


    printf("post increment of a:%d\n",a++);
    printf("pre increment of a:%d\n",++a);
    printf("post decrement of b:%d\n",b--);
    printf("pre decrement of b:%d\n",--b);

    return 0;
}
