// c program to input any capital letters and transform it to a small letter(without using tolower() function)

#include <stdio.h>
int main() {

char ch;
printf("Enter any capital letter: ");
scanf("%c",&ch);
printf("The small letter is: %c",ch+32);
return 0;
}

