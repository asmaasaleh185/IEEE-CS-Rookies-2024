#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;

    double CX1=(x1 + x2) / 2;
    double CY1=(y1 + y2) / 2;
    double CX2=(x3 + x4) / 2;
    double CY2=(y3 + y4) / 2;

    double r1 = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2))/2;
    double r2 = sqrt(pow((x3 - x4),2) + pow((y3 - y4),2))/2;

    double RR = r1 + r2;
    double line = sqrt(pow((CX1 - CX2),2) + pow((CY1 - CY2),2));

    if(line > RR)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
    return 0;
}
