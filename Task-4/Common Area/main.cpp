#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int c=1;c<=t;c++)
    {
        long long num;
        cin>>num;
        long long x1,y1,x2,y2, max1,minX2,maxY1,minY2;
        cin>>x1>>y1>>x2>>y2;
        max1 = x1, maxY1 = y1, minX2 = x2, minY2 = y2;
        for(int i=1; i<num; i++)
        {
            cin>>x1>>y1>>x2>>y2;
            max1 = max(x1,max1);
            maxY1 = max(y1,maxY1);
            minX2 = min(minX2,x2);
            minY2 = min(minY2,y2);
        }
        if(minX2 > max1 && minY2 > maxY1)
        {
            cout<<"Case #"<<c<<": "<<(minX2 - max1) * (minY2 - maxY1)<<endl;
        }
        else
        {
            cout<<"Case #"<<c<<": "<<0<<endl;

        }
    }
    return 0;
}
