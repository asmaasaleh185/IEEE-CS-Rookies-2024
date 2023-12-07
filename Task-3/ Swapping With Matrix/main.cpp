#include <iostream>

using namespace std;
const int s=500;
void print(int arr[s][s],int size)
{
    for(int row=0; row<size; row++)
    {
        for(int col=0; col<size; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int size, n1, n2;
    cin>>size>>n1>>n2;
    int arr[s][s];
    for(int row=0; row<size; row++)
    {
        for(int col=0; col<size; col++)
        {
            cin>>arr[row][col];
        }
    }
    n1--,n2--;
    for(int i=0; i<size; i++)
    {
        int temp=arr[n1][i];
        arr[n1][i]=arr[n2][i];
        arr[n2][i]=temp;
    }
    for(int i=0; i<size; i++)
    {
        int temp=arr[i][n2];
        arr[i][n2]=arr[i][n1];
        arr[i][n1]=temp;
    }
    print(arr, size);
    return 0;
}
