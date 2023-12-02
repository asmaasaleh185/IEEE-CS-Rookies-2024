#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string s,result;
    getline(cin, s);
    int counter=0;
    for(int i=0; i<s.length(); i++)
    {
        if (s[i]!=' '&&s[i]!='!'&&s[i]!='.'&&s[i]!=','&&s[i]!='?')
        {
            result+=s[i];
        }
        if ((s[i]==' '||s[i]=='!'||s[i]=='.'||s[i]==','||s[i]=='?'||i==s.length()-1)&&result.length()!=0)
        {
            counter++;
            result="";
        }
    }
    cout<<counter<<endl;
    return 0;
}
