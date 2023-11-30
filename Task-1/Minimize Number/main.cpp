#include <iostream>

using namespace std;

int main()
{
    int n,mini=0;
    cin>>n;
    long long arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for (int i =0; i<n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            cout<<0<<endl;
            return 0;
        }
        int sum=0;
        while(arr[i]%2==0)
        {

            sum+=1;
            arr[i]/=2;
        }
        if(i == 0 || mini > sum)
        {
            mini=sum;
        }
    }
    cout<<mini<<endl;
    return 0;
}
