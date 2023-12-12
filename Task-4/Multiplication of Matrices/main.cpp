#include <iostream>

using namespace std;

int main()
{
    int RA,CA;
    cin>>RA>>CA;
    int arr[RA][CA];
    for (int row = 0; row < RA; row++)
    {
        for (int col = 0; col < CA; col++)
        {
            cin>>arr[row][col];
        }
    }

    int RB,CB;
    cin>>RB>>CB;
    int brr[RB][CB];
    for (int row = 0; row < RB; row++)
    {
        for (int col = 0; col < CB; col++)
        {
            cin>>brr[row][col];
        }
    }

    int result[RA][CB];
    for (int row = 0; row < RA; row++)
    {
        for (int col = 0; col < CB; col++)
        {
            result[row][col]=0;
        }
    }

    for (int row = 0; row < RA; row++)
    {
        for (int col = 0; col < CB; col++)
        {
            for (int i = 0; i < CA; i++)
            {
                result[row][col]  += arr[row][i] * brr[i][col];
            }
        }
    }

    for (int row = 0; row < RA; row++)
    {
        for (int col = 0; col < CB; col++)
        {
            cout<<result[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
