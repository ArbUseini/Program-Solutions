#include <iostream>
using namespace std;

int main(){ //smoking kills
    int a, b;
    cin >> a >> b;
    if (a <= 0 || b <= 0){cout << "Invalid input"; return 0;}
    if (a < b){int temp(a); a = b; b = temp;}
    while (b != 0){
        if (a % 100 / 10 == b % 10){
            b /= 10;
            a /= 100;
            continue;
        }
        cout << "NE";
        return 0;
    }
    cout << "PAREN";
    return 0;
}