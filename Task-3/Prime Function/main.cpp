#include <iostream>
#include <cmath>
using namespace std;
bool prime(int n)
{
    for (int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if (n==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(prime(n))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
