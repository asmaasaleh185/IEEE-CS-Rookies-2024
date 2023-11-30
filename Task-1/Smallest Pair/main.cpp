#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int size,result=0,mini=0,flag=1;
        cin>>size;
        int a[size];
        for (int c = 0; c < size; c++)
        {
            cin>>a[c];
        }
        for (int i=1; i <=size; i++)
        {
            for (int c=i+1; c<=size; c++)
            {
                result = a[i-1] + a[c-1] + c - i;
                if(flag==0 && mini>result)
                {
                    mini=result;
                }
                if (flag)
                {
                    mini=result;
                    flag=0;
                }
                result=0;
            }
        }
        flag=1;
        cout<<mini<<endl;

    }

    return 0;
}
