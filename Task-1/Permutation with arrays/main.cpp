#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size,flag=0;
    cin>>size;
    int arr[size];
    int brr[size];
    for (int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for (int i=0; i<size; i++)
    {
        cin>>brr[i];
    }
    sort(arr,arr+size);
    sort(brr,brr+size);
    for (int i=0; i<size; i++)
    {
        if(arr[i]!=brr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"yes\n";
    }
    else
    {
        cout<<"no\n";
    }
    return 0;
}
