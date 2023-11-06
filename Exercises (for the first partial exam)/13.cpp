#include <iostream>
using namespace std;

int main(){ //smoking kills
    int a, b;
    cin >> a >> b;
    for (/*don't need anything here*/; a <= b; a++){
        int temp = a;
        bool good(true);
        while (temp > 0){
            if (temp%2 != 0){
                good = false;
                break;
            }
            temp /= 10;
        }
        if (good){
            cout << a;
            return 0;
        }
    }
    cout << "NSN";
    return 0;
}