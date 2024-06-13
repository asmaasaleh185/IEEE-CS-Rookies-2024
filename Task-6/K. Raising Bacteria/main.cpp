#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    int counter = 0;
    while (x > 0){
        counter += x % 2;
        x /= 2;
    }
    cout << counter << endl;
    return 0;
}
