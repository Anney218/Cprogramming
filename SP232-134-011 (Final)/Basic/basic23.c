// A c program to
#include<stdio.h>
int main(){
    int number, originalNumber, reverseNumber;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    originalNumber = number;

    reverseNumber = (number % 10) * (number / 10);

    printf("original number:%d\n", originalNumber);
    printf("Reverse number: %d\n", reverseNumber);
    return 0;
}
