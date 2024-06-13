#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int evenIndex = -1, oddIndex = -1, evenNumbers = 0, oddNumbers = 0;
    for(int i = 0; i < n; i++){;
        if(arr[i] % 2 == 0){
            evenNumbers++;
            evenIndex= i + 1;
        }
        else{
            oddNumbers++;
            oddIndex = i + 1;
        }
    }
    if(evenNumbers == 1){
        cout<< evenIndex<< endl;
    }
    else{
        cout<< oddIndex<< endl;
    }
    return 0;
}
