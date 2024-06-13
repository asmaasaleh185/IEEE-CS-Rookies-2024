#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    bool isRated = false;

    for (int i = 0; i < n; i++){
        int j = 0;
        for(; j < 2; j++){
            cin>>arr[i][j];
        }
        if(arr[i][0] != arr[i][j-1]){
            isRated = true;
        }
    }
    if (isRated){
        cout<< "rated\n";
        return 0;
    }
    for(int i = 1; i < n; i++){
         if(arr[i][0] > arr[i-1][0]){
            cout<< "unrated\n";
            return 0;
         }
    }
    cout<<"maybe\n";
    return 0;
}
