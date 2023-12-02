#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int q;
    cin>>q;
    string s;
    cin>>s;
    if(q==1)
    {
        for(int i=0; i<s.length(); i++)
        {
            for(int c=0; c<Original.length(); c++)
            {
                if(s[i]==Original[c])
                {
                    cout<<Key[c];
                    break;
                }
            }
        }
    }
    else
    {
        for(int i=0; i<s.length(); i++)
        {
            for(int c=0; c<Key.length(); c++)
            {
                if(s[i]==Key[c])
                {
                    cout<<Original[c];
                    break;
                }
            }
        }
    }
    return 0;
}
