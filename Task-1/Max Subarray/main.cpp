#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size;
        cin>>size;
        int a[size];
        for (int c=0; c<size; c++)
        {
            cin>>a[c];
            cout<<a[c]<<" ";
        }
        int i=0;
        int m;
        int z = 0;
        while(true)
        {
            if (z == size-1)
            {
                break;
            }
            if(i == z)
            {
                m= max(a[i],a[i+1]);
            }
            else
            {
                m=max(m, a[i+1]);
            }
            cout<<m<<" ";
            i++;
            if (i == size - 1)
            {
                z++;
                i = z;
            }
        }
        cout<<endl;

    }
    return 0;
}
