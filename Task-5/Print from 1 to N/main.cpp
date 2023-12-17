#include <iostream>

using namespace std;
void print (int N)
{
    if (N > 1)
    {
        print(N - 1);
    }
    cout<<N<<endl;

}
int main()
{
    int N;
    cin>>N;
    print(N);

    return 0;
}
