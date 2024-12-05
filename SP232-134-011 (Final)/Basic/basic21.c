// A c program input three digits numbers from the user and display the square of first and last numbers(hint:I/p:358 O/P:square of 3 is 9 and square of 8 is 64)
#include<stdio.h>
int main(){
    int number, firstDigit, lastDigit;
    printf("Enter a three-digit number: ");
    firstDigit = number / 100;

    lastDigit = number % 10;

    printf("Square of %d is %d\n", firstDigit, firstDigit * firstDigit);
    printf("Square of %d is %d\n", lastDigit, lastDigit * lastDigit);
    return 0;
}
