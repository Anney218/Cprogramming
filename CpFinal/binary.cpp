

#include<iostream>
using namespace std;

int main()
{
    int array1[100];
    int s;

    cout << "Enter the number of elements: ";
    cin >> s;

    cout << "Enter the elements of the array : ";
    for(int i = 0; i < s; i++)
    {
        cin >> array1[i];
    }

    int skey;
    cout << "Enter the element to search: ";
    cin >> skey;

    int low = 0;
    int high = s - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(array1[mid] == skey)
        {
            cout << "The element is found at index " << mid << endl;
            return 0;
        }
        else if(array1[mid] > skey)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "The element is not found" << endl;
    return 0;
}
