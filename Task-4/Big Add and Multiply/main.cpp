#include <iostream>
#include <string>
using namespace std;
string add(const string& num1, const string& num2)
{
    string result;
    int carry = 0;
    int i = num1.size()-1;
    int j = num2.size()-1;
    while (i >= 0 || j >= 0 || carry > 0)
    {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit = sum % 10;
        result.insert(result.begin(), digit + '0');
        i--;
        j--;
    }
    return result;
}
string multiply(const string& num1, int num2)
{
    string result;
    int carry = 0;

    for (int i = num1.size() - 1; i >= 0; i--)
    {
        int digit = num1[i] - '0';
        int product = digit * num2 + carry;
        carry = product / 10;
        int digitProduct = product % 10;
        result.insert(result.begin(), digitProduct + '0');
    }
    while (carry > 0)
    {
        int digit = carry % 10;
        result.insert(result.begin(), digit + '0');
        carry /= 10;
    }
    return result;
}
int main()
{
    string n;
    cin>>n;
    cout<< add(n, "9999")<<endl<< multiply(n, 9999)<<endl;
    return 0;
}
