//4
#include<stdio.h>
#include<string.h>
int main(){
    char str1[30];
    char str2[30];
    printf("enter a string 1: ");
    scanf("%s",str1);
    printf("enter a string 2: ");
    scanf("%s",str2 );
    strcat(str1,str2);
    printf("concatenation:%s\n",str1);
    return 0;
}
