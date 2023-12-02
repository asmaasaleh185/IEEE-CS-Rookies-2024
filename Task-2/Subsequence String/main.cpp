#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    string result="hello";
    cin>>s;
    int c=0;
    for (int i=0; i<s.length(); i++)
    {
        if(c==result.length())
        {
            break;
        }
        if(s[i]==result[c])
        {
            c++;
        }
    }
    if(c==result.length())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }
    return 0;
}

