//9 WAP that takes integers as input in a list and displays the elements
 #include <bits/stdc++.h>
using namespace std;
int main(){
list<int> a;
cout << "Enter 5 elements : ";
for (int i = 0; i < 5; i++){
    int input;
cin >> input;
a.push_back(input);
}
cout << " Displayed elements in a list : ";
for (auto i = a.begin(); i != a.end(); i++){
    cout << *i << " ";
}
}
