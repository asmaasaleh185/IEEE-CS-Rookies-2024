#include <iostream>
#include <algorithm>
using namespace std;
int prime(int arr[], int size)
{
    int countPrime=0;
    for(int i=0; i<size; i++)
    {
        int flag=0;
        for (int c=2; c<=arr[i]/2; c++)
        {
            if(arr[i]%c==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0 && arr[i]!=1)
        {
            countPrime++;
        }
    }
    return countPrime;
}
bool palindrome(int num)
{
    int temp = num;
    int mod;
    int sum=0;
    while(num > 0)
    {
        mod = num%10;
        sum=(sum*10)+mod;
        num=num/10;
    }
    if(temp==sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int countDivisor(int num)
{
    int counter=0;
    for(int i=1; i<=num/2; i++)
    {
        if(num%i==0)
        {
            counter++;
        }
    }
    return counter;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+size);
    cout<<"The maximum number : "<<arr[size-1]<<endl;
    cout<<"The minimum number : "<<arr[0]<<endl;
    cout<<"The number of prime numbers : "<<prime(arr, size)<<endl;
    int countPalindrome=0;
    int maxDivisor=0;
    int index=0;
    for(int i=0; i<size; i++)
    {
        if (palindrome(arr[i]))
        {
            countPalindrome++;
        }
        if(maxDivisor <= countDivisor(arr[i]))
        {
            maxDivisor=countDivisor(arr[i]);
            index=i;
        }
    }
    cout<<"The number of palindrome numbers : "<<countPalindrome<<endl;
    cout<<"The number that has the maximum number of divisors : "<<arr[index]<<endl;
    return 0;
}
