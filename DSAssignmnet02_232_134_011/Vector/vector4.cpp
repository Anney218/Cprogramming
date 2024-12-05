// 4  implement a function to count all occurrences of a specified element from a vector

#include <iostream>
#include <vector>
using namespace std;

int countOccurrences(vector<int>& vec, int target)
{
    int count = 0;
    for (int num : vec)
    {
        if (num == target)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> vec = {5, 3, 8, 1, 6, 4, 2, 7, 5, 5};

    int elementToCount = 5;

    int occurrences = countOccurrences(vec, elementToCount);

    cout <<"Occurence of 5: " << occurrences << endl;

    return 0;
}
