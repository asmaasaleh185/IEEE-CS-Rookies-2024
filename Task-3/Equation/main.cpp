#include <iostream>
#include <cmath>
using namespace std;
long long Equation(int n1, int n2)
{
    long long result=0;
    for(int i=2; i<=n2; i+=2)
    {
        result += pow(n1, i);
    }
    return result;
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<Equation(x,n)<<endl;
    return 0;
}
