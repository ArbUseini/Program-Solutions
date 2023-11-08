#include <iostream>
using namespace std;

int main(){ //smoking kills
    int t;
    cin >> t;
    if (t < 10){
        cout << "Brojot ne e validen";
        return 0;
    }
    while (t--){
        int n(t), count(0), m(0);
        while (n != 0)
        {
            m *= 10;
            m += n % 10;
            n /= 10;
            count++;
        }
        if (m%count == 0){
            cout << t;
            return 0;
        }
    }
    return 0;
}