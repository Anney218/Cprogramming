//problem 1...
 //Subtraction of elements

#include<bits/stdc++.h>
using namespace std;
int main(){
   list<int> ll ={500,20,300,40,100};

   int dif = 0;
   bool element1 = true;
   for (int x : ll)
   {
       if(element1)
       {
           dif = x;
           element1 = false;
       }
       else
       {
           dif -=x;
       }
   }
   cout << " Difference : " <<dif<<endl;
   return 0;
   }

