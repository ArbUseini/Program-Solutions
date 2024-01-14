#include <iostream>
using namespace std;

void print(int st, int ed){
    if (st > ed){
        return;
    }
    cout << st;
    print(st+1, ed);
}

void rec(int n, int i){
    if (i > n){
        return;
    }
    print(1, i);
    cout << endl;
    rec(n, i+1);
}

int main(){
    int n;
    cin >> n;
    rec(n, 1);
}