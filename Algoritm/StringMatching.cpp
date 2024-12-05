
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pattern;
    cout<<"enter pattern: ";
    cin>>pattern;

    string s;
    cout<<"enter string: ";
    cin>>s;

    int ans=0;
    int patternLength=pattern.length();
    for(int i=0; i<=s.length()-patternLength;i++)
    {
        if(s.substr(i,patternLength)==pattern)
        {
            ans++;
        }
    }
    cout<<"number of matches: "<<ans<<endl;
    return 0;
}
/*
enter a string :abcab
enter a string:abcabcab
*/
