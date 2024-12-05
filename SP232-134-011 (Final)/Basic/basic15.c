// c program to input any capital letters and transform it to a small letter

#include <stdio.h>

int main() {
    char capitalLetter, smallLetter;

    // Input a capital letter from the user
    printf("Enter a capital letter: ");
    scanf(" %c", &capitalLetter);

    // Check if the input is a capital letter
    if (isupper(capitalLetter)) {
        // Convert to small letter using tolower function
        smallLetter = tolower(capitalLetter);

        // Print the result
        printf("The small letter is: %c\n", smallLetter);
    } else {
        printf("Invalid input! Please enter a capital letter.\n");
    }

    return 0;
}
