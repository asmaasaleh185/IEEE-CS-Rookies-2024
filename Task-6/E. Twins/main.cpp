#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int total = 0;

    for (int i = 0; i < n; i++){
        cin >>arr[i];
        total += arr[i];
    }
    sort(arr, arr+n);
    reverse(arr, arr+n);
    int selectedCoins = 0, counter = 0;

    for (int i = 0; i < n; i++){
         selectedCoins += arr[i];
         counter++;
         if (selectedCoins > total / 2){
            break;
         }
    }
    cout<<counter<<endl;

}
