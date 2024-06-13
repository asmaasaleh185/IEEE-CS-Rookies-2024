#include <iostream>

using namespace std;

int main()
{
    long long m, n;
    cin>>m>>n;
    long long ans = 0;

    for(int i = 1; i <= m; i++) {
        ans += (n + (i % 5)) / 5;
    }
    cout<<ans<<endl;
    return 0;
}
