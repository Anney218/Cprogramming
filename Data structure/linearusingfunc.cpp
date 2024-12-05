
#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    int index = -1; // Initialize index as -1 (not found)

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            index = i; // Update index if key is found
            break;
        }
    }

    return index;
}

int main()
{
    int array1[100];
    int size, key;
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> array1[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    int index = linearSearch(array1, size, key);

    if(index != -1)
    {
        cout << "The element " << key << " is found at index " << index << endl;
    }
    else
    {
        cout << "The element " << key << " is not found in the array." << endl;
    }

    return 0;
}
