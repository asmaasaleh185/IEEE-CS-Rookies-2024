#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char temp;
    int counter=0;
    for (int i=0; i<n; i++)
    {
        if(i==0)
        {
            temp=s[i];
            counter++;
        }
        else
        {
            if(s[i] != temp)
            {
                counter++;
                temp=s[i];
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}
