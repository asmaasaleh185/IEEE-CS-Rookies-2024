#include <iostream>

using namespace std;
long long N;
bool reachValue(long long val)
{
    if (N < val)
    {
        return false;
    }
    else if (N == val)
    {
        return true;
    }
    else
    {
        return reachValue(val * 10) || reachValue(val * 20);
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cin>>N;
        if (reachValue(1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
    return 0;
}
