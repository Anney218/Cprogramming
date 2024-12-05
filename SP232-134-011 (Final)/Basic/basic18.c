// c program to input any small letters and transform it to a capital letter(without using tolower() function)

#include <stdio.h>
int main() {

char ch;
printf("Enter any small letter: ");
scanf("%c",&ch);
printf("The capital letter is: %c",ch-32);
return 0;
}

