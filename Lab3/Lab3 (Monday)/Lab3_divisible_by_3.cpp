#include <iostream>

using namespace std;

int main() {
    int a, b, sum=0,n;

    cin >> a >> b;

    for (n = a; n <= b; n++)
    {
        if(n%3==0)
        {
            sum+=n;
        }
    }
    cout << sum;
}
