#include <iostream>
using namespace std;

int rec(int n){
    if (!n){
        return 0;
    }
    return (n%2)? rec(n/10)*10 + n%10-1 : rec(n/10)*10;
}

int main(){
    int n;
    cin >> n;
    cout << "Brojot e " << rec(n);
}