#include <iostream>
#include <iomanip>
using namespace std;
int N;
double arr[100];

double AVG(int index, double ans)
{
    if (index == N)
    {
        return ans / N;
    }
    else
    {
        return AVG(index+1, ans + arr[index]);
    }
}
int main()
{
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    cout<<fixed<<setprecision(6)<< AVG(0, 0)<<endl;

    return 0;
}
