#include <iostream>

using namespace std;
int row, col;
int arr[10][10];

int maxPath(int start, int end)
{
    if (start == row - 1 && end == col - 1)
    {
        return arr[start][end];
    }
    else if (start == row || end == col)
    {
        return -1000000;
    }
    else
    {
        int right = maxPath(start, end + 1);
        int down = maxPath(start + 1, end);
        return arr[start][end] + max(right, down);
    }
}

int main()
{
    cin>>row>>col;
    for (int i = 0; i < row; i++)
    {
        for (int c = 0; c < col; c++)
        {
            cin>>arr[i][c];
        }
    }
    cout<<maxPath(0, 0)<<endl;
    return 0;
}
