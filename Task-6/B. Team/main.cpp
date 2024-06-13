#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0, ans = 0;
    cin>>n;
    int arr[n][3];
    for(int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        counter = 0;
        for (int j = 0; j < 3; j++){
            if(arr[i][j] == 1){
                counter++;
            }
        }
        if (counter >= 2){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
