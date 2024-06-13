#include <iostream>
#include <string>
using namespace std;

bool goodNumber(string &number, int k){
    bool digits[10] = {false};

    for(int i = 0; i <= number.size(); i++){
        char digit = number[i];
        digits[digit - '0'] = true;
    }
    for(int i = 0; i <= k ; i++){
        if(!digits[i]){
            return false;
        }
    }
    return true;
}
int main()
{
    int n, k;
    cin>>n>>k;
    int counter = 0;
    for(int i = 0; i < n; i++){
        string number;
        cin>>number;
        if(goodNumber(number, k)){
            counter++;
        }
    }
    cout<<counter;
    return 0;
}
