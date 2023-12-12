#include <iostream>

using namespace std;
long long fact(int num)
{
    long long result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    int A, B;
    cin>>A>>B;
    cout<<fact(A) / (fact(A - B) * fact(B))<<" ";
    cout<<fact(A) / (fact(A - B))<<endl;

    return 0;
}
