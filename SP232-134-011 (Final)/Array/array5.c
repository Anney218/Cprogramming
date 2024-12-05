
#include <stdio.h>

int main()
{
    int size, i, key;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Input elements into the array
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // Input the element to find its frequency
    printf("Enter the element to find its frequency: ");
    scanf("%d", &key);

    // Find the frequency of the given element
    int frequency = 0;
    for (i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            frequency++;
        }
    }

    // Display the frequency of the given element
    printf("The frequency of %d is: %d\n", key, frequency);

    return 0;
}
