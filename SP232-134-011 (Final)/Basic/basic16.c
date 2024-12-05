// c program to input any small letters and transform it to a capital letter

#include <stdio.h>
int main() {
    char smallLetter, capitalLetter;

    // Input small letter
    printf("Enter a small letter: ");
    scanf(" %c", &smallLetter);

    // Transform to uppercase using toupper function
    capitalLetter = toupper(smallLetter);

    // Display the uppercase letter
    printf("The uppercase letter is: %c\n", capitalLetter);
    return 0;
}
