#include <iostream>
using namespace std;

int main(){ //smoking kills
    char f;
    int sum(0);
    while (cin >> f){
        if (f >= '0' && f <= '9'){
            sum += f - '0';
            continue;
        }
        if (f >= 'a' && f <= 'f'){
            sum += f - 'a' + 10;
            continue;
        }
        sum += f - 'A' + 10;
    }
    sum -= f - 'A' + 10;
    if (sum % 16 == 0){
        if (sum % 100 == 16){
            cout << "Poln pogodok";
        }
        else{
            cout << "Pogodok";
        }
        return 0;
    }
    cout << sum;
    return 0;
}