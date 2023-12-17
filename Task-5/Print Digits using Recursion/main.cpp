#include <iostream>
#include <string>
using namespace std;
int index = 0;
void printDigits(string N)
{
    if(index == N.size())
    {
        return;
    }
    else
    {
        cout<<N[index]<<" ";
        index++;
        printDigits(N);

    }

}
int main()
{
    long long T;
    cin>> T;
    while(T--)
    {
        string N;
        cin>>N;
        printDigits(N);
        cout<<endl;
        index = 0;

    }
    return 0;
}
