#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int size;
        cin>>size;
        long long arr[size];
        for(int i=0; i<size; i++)
        {
            cin>>arr[i];
        }
        int ans=size;
        int x=0,y=0;
        while(true)
        {
            if(y==size-1)
            {
                break;
            }
            if(arr[x]>arr[x+1])
            {
                y++;
                x=y;
                continue;
            }
            ans++;
            x++;
            if(x==size-1)
            {
                y++;
                x=y;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
