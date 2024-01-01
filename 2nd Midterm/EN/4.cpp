#include <iostream>
using namespace std;

int rec(int num, int target, int rep){
    rep++;
    if (num == 0){
        return 0;
    }
    return (num%10 == target && rep%2 == 0)? 1+rec(num/10, target, rep) : rec(num/10, target, rep);
}

int main(){
    int a, b, c;
    while (cin >> a >> b >> c){
        if (rec(a, c, 0) < rec(b, c, 0)){
            cout << a << endl;
        }
        else{
            cout << b << endl;
        }
    }
}