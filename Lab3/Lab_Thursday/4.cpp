#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, sum(0);
    cin >> a >> b;
    for (; a < b; a++){
        if (a%3 == 0 && a%2 != 0){
            sum += a;
        }
    }
    cout << sum;
    return 0;
}