#include <iostream>
using namespace std;

int main(){ //smoking kills
    int a, b, c;
    cin >> a >> b >> c;
    if (a+b+c == 180){
        cout << "YES" << endl;
        if (a > 90 || b > 90 || c > 90){
            cout << "OBTUSE";
        }
        else if (a == 90 || b == 90 || c == 90){
            cout << "RIGHT";
        }
        else{
            cout << "ACUTE";
        }
        return 0;
    }
    cout << "NO";
    return 0;
}