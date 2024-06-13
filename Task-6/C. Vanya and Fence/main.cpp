#include <iostream>

using namespace std;

int main()
{
    int n, h, ans = 0;
    cin>>n>>h;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] > h){
            ans += 2;
        }
        else{
            ans += 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
