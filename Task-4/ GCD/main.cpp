#include <iostream>

using namespace std;
long long GCD(long long num1, long long num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    return GCD(num2, num1 % num2);
}
long long LCM(long long num1, long long num2, long long gcd)
{
    return (num1 * num2) / gcd;
}
int main()
{
    long long A, B;
    cin>>A>>B;
    cout<<GCD(A, B)<<" "<<LCM(A, B, GCD(A, B));
    return 0;
}
