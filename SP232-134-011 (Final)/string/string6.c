//6
#include<stdio.h>
#include<string.h>
int main(){
    char str[30],ch;
    int i,vowel;
    printf("enter a string: ");
    scanf("%s",str);
    i=vowel=0;
    while((ch=str[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I' || ch=='O' || ch=='U')
        vowel++;
        i++;
    }
    printf("number of vowels=%d\n",vowel);
    return 0;
}
