// problem 6...
//program to insert a lists element to another

#include<bits/stdc++.h>
using namespace std;
int main(){
 list<int> a = {1,2,3};
 list<int> b = {4,5,6};
 a.insert(a.end(), b.begin(),b.end());

 cout<< "List 1 after insertion : ";
 for (int x : a)
 {
     cout << x << " ";
 }
 cout << endl;
}
