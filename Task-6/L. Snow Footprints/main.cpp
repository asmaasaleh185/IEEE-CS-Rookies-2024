#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int start, end;

    for(int i = 0; i < n; i++){
        if(s[i] != '.'){
            start = i + 1;
            break;
        }
    }

    for(int i = start - 1; i < n; i++){
        if(s[i] == 'L'){
            end = i;
            break;
        }
        if(s[i] == '.'){
            end = i + 1;
            break;
        }
    }

    cout << start<< ' '<< end;
    return 0;
}
