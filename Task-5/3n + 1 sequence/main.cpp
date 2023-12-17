#include <iostream>

using namespace std;
int counter = 0;
void length(long long N)
{
    counter++;
    if(N == 1)
    {
        return;
    }
    else if (N % 2 == 0)
    {
        length(N / 2);
    }
    else
    {
        length(N * 3 + 1);
    }
}
int main()
{
    long long N;
    cin>>N;
    length(N);
    cout<<counter<<endl;
    return 0;
}
