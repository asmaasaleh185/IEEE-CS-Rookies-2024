#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int flag =1;
        for(int i=0; i+2<s.length(); i++)
        {
            if(s.substr(i,3) == "010"||s.substr(i,3) == "101")
            {
                flag=0;
                break;
            }

        }
        if(flag!=0)
        {
            cout<< "Bad"<<endl;
        }
        else
        {
            cout<<"Good"<<endl;
        }
    }

    return 0;
}
