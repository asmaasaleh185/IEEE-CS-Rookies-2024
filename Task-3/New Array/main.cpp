#include <iostream>

using namespace std;
void print(int arr1[], int arr2[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr2[i]<<" ";
    }
    for(int i=0; i<size; i++)
    {
        cout<<arr1[i]<<" ";
    }

}
int main()
{
    int size;
    cin>>size;
    int arr1[size],arr2[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr1[i];
    }
    for(int i=0; i<size; i++)
    {
        cin>>arr2[i];
    }
    print(arr1,arr2,size);
    return 0;
}
