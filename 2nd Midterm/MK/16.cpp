#include <iostream>
using namespace std;

int big(int n){
    if (n < 100){
        return (n%10 > n/10)? n%10 : n/10;
    }
    return (n%10 > n/10%10)? big(n/100 * 10 + n % 10) : big(n/10);
}

int main(){
    int n;
    while (cin >> n){
        cout << big(n) << endl;
    }
    return 0;
}