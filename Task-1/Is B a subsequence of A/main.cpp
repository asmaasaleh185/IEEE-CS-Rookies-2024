#include <iostream>

using namespace std;

int main()
{
    int size1,size2;
    cin>>size1>>size2;
    long long arr1[size1];
    long long arr2[size2];
    for(int i=0; i<size1; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<size2; i++)
    {
        cin>>arr2[i];
    }
    int c=0;
    int ans=0;
    for(int i =0; i<size1; i++)
    {
        if(arr1[i]==arr2[c])
        {
            c++;
            ans++;
        }
    }
    if(ans==size2)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
