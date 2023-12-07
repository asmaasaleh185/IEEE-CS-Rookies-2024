#include <iostream>

using namespace std;
int index=0;
string binary(int n)
{
    int mod;
    string s1;
    while(n !=0)
    {
        mod = n%2;
        n/=2;
        if(mod==0)
        {
            s1+="0";

        }
        else
        {
            s1+="1";
        }
        index++;
    }
    return s1;
}
bool palindrome(string s)
{
    for(int i=0,c=index-1; i<index,c>=0; i++,c--)
    {
        if(s[i]!=s[c])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cin>>num;
    if(num%2 == 0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    string s = binary(num);
    bool result = palindrome(s);
    if(result)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
