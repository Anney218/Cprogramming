// problem 2....
//perform Linear Search on list
#include<bits/stdc++.h>
using namespace std;
int linearSearch(list<int>& myList,int target)
{
    int index = 0;
    for (int x : myList)
    {
        if ( x == target)
        {
            return index;
        }
        index++;
    }
    return -1;
}
int main(){
list<int> a = {500,20,300,40,100};

int index = linearSearch(a,40);
if(index != -1)
{
    cout<< "Index : "<<index<<endl;
}
else
{
    cout<< "Elements not found"<<endl;
}
}
