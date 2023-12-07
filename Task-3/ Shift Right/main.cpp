#include <iostream>

using namespace std;
void shift(int arr[], int size, int s)
{
    for(int i=size-s; i<size; i++)
    {
        cout<<arr[i]<<" ";

    }
    for(int i=0; i<size-s; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size,s;
    cin>>size>>s;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    s %= size;
    shift(arr,size,s);
    return 0;
}
