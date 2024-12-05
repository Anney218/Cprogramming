//7
#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char find, replace;

    printf("Enter a string: ");
    gets(str); // Input the string (avoid using gets in production code)

    printf("Enter the character to find: ");
    scanf(" %c", &find); // Read the character to find

    printf("Enter the character to replace it with: ");
    scanf(" %c", &replace); // Read the replacement character

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] == find)
        {
            str[i] = replace;
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
