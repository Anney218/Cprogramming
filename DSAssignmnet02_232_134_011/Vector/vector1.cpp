//1 Write a function to find the sum of all elements in a vector

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec= {10,20,30,40,50};

    int sum = 0;

    for(int i= 0; i<vec.size(); i++)
    {
        sum += vec[i];
    }

    cout<<"Sum= "<<sum<<endl;

    return 0;


}