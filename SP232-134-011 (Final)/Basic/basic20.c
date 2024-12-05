// A c program to input three digits numbers from the user and calculate sum of the first and last numbers(hint:I/p:358 O/p:11)
#include<stdio.h>
int main(){
    int number, firstDigit, lastDigit, sum;

    printf("Enter a three-digit number:");
    scanf("%d",&number);
    firstDigit = number / 100;
    lastDigit = number % 10;
    sum = firstDigit + lastDigit;
    printf("sum of first and last digits: %d\n", sum);
    return 0;
}
