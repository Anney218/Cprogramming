
#include <iostream>
using namespace std;

bool isValidPalindrome(string inputString)
{
    int left = 0, right = inputString.size() - 1;

    while (left < right)
    {
        while (left < right && !isalnum(inputString[left]))
        {
            left++;
        }
        while (left < right && !isalnum(inputString[right]))
        {
            right--;
        }
        if (tolower(inputString[left]) != tolower(inputString[right]))
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main()
{

    string inputString;

    cout << "Enter a string to check if it is a valid palindrome: ";
    getline(cin, inputString);

    if (isValidPalindrome(inputString))
    {
        cout << "The string is a valid palindrome.";
    }
    else
    {
        cout << "The string is not a valid palindrome.";
    }

    return 0;
}
