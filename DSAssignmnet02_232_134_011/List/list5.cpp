//problem 5...
//program to print even-odd numbers


#include<bits/stdc++.h>
using namespace std;
int main(){
list<int> a = {1,2,3,4,5,6};
cout<<"even numbers: ";
for(int x : a)
{
    if(x%2==0)
    {
        cout<<x<<" ";
    }
}
cout<<endl<<"Odd numbers: ";
for(int x : a)
{
    if (x%2!=0)
    {
        cout<<x<<" ";
    }
}
cout << endl;
}
