#include <iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;
    int a[size];
    for (int i =0; i <size; i++)
    {
        cin>>a[i];
    }
    int mini=a[0];
    int index1=0;
    for (int i = 0; i < size; i++)
    {
        if (mini >= a[i])
        {
            mini=a[i];
            index1=i;
        }
    }
    int max=a[0];
    int index2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (max <= a[i])
        {
            max=a[i];
            index2=i;
        }
    }
    int temp = a[index1];
    a[index1]=a[index2];
    a[index2]=temp;

    for (int i =0; i <size; i++)
    {
        cout<<a[i];
        if(i !=(size-1))
            cout<<" ";
    }
    return 0;
}
