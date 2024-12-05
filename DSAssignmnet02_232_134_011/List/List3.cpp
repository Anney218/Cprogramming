// problem 3
//Find the largest element
#include<bits/stdc++.h>
using namespace std;
int main(){
list<int> a = {500,20,300,40,100};
auto max = a.begin();
for (auto i:a)
{
    if(i>*max)
    {
        *max = i;
    }
}
cout << " max Element : "<<*max<<endl;
}

