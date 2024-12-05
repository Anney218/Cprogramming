// WAp that checks two strings are equal or not

//1
#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="hello world";
    char str2[]="hello";
    int d=strcmp(str1,str2);
    if(d==0)
    {
        printf("strings are equal");
    }
    else
    {
        printf("strings are not equal");
    }
    return 0;
}
