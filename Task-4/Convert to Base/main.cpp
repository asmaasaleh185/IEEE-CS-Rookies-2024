#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
long long num(char c)
{
    if (c>='0' && c<='9')
    {
        return c - '0';
    }
    else
    {
        return c - 'A' + 10;
    }
}
char toChar(long long num)
{
    if (num >= 0 && num <= 9)
    {
        return num + '0';
    }
    else
    {
        return num + 'A' - 10;
    }
}
long long toDec(string val, long long base)
{
    long long result = 0;
    long long pow = 1;
    for(int i = val.size() - 1; i >= 0; i--)
    {
        result += num(val[i]) * pow;
        pow *= base;
    }
    return result;
}
char* toBinary(char val[], long long base, long long num)
{
    int index = 0;
    while(num > 0)
    {
        val[index++] = toChar(num % base);
        num /= base;
    }
    val[index] = '\0';
    reverse(val,val+index);
    return val;
}
int main()
{
    int t;
    cin>>t;
    if(t==1)
    {
        string s;
        cin>>s;
        long long base;
        cin>>base;
        cout<<toDec(s, base)<<endl;
    }
    else
    {
        long long num, base;
        cin>>num>>base;
        char result[100];
        cout<<toBinary(result, base, num)<<endl;
    }
    return 0;
}
