#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    long long sortedArr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sortedArr[i] = arr[i];
    }
    sort(sortedArr, sortedArr + n);

    for(int i = 1; i < n; i++){
        arr[i] = arr[i - 1] + arr[i];
        sortedArr[i] = sortedArr[i - 1] + sortedArr[i];
    }

    int m;
    cin>>m;

    for(int i = 0; i < m; i++){
        int t, r, l;
        cin>>t>>l>>r;
        l -= 1;
        r -= 1;

        if(t == 1){
            if(l == 0)
                cout<<arr[r]<<endl;
            else
                cout<<arr[r] - arr[l - 1]<<endl;
        }
        else{
            if(l == 0)
                cout<<sortedArr[r]<<endl;
            else
                cout<<sortedArr[r] - sortedArr[l - 1]<<endl;
        }
    }

    return 0;
}
