// problem 4...
// program to find occurrences of all elements
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> a = {1,2,3,3,4,5,6,6};
    for (auto i=a.begin(); i!=a.end(); i++)
    {
        int count = 1;
        for (auto j=next(i); j!=a.end(); j++)
        {
            if(*i == *j)
            {
                count++;
            }
        }
        cout<<*i<<" : "<<count<<endl;
        for (auto j=next(i); j!=a.end();)
        {
            if (*i==*j){
            j=a.erase(j);
        }
        else{
                j++;
        }
    }
    }
}
