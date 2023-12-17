#include <iostream>

using namespace std;
long long Fibonacci(long long num)
{
    if (num == 1)
    {
        return 0;
    }
    else if(num == 2)
    {
        return 1;
    }
    else
    {
        return Fibonacci(num-1) + Fibonacci(num-2);
    }
}
int main()
{
    long long num;
    cin>>num;
    cout<<Fibonacci(num)<<endl;

    return 0;
}
