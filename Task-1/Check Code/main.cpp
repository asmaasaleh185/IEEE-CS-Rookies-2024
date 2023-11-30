#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, flag=0;
    cin>>a>>b;
    string s;
    cin>>s;
    int len= s.length();
    for (int i=0; i<len; i++)
    {
        if((s[i] >= 48 && s[i] <= 57))

            flag=1;
        else if (s[i] == '-')
            flag=1;
        else
        {
            flag=0;
            break;
        }
    }
    if((len == (a+b+1)) && (s[a]== '-')&& flag == 1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
