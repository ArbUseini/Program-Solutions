#include <iostream>
using namespace std;

int main(){ //smoking kills
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        int new_a(a%10), temp_a(a/10);
        while (temp_a != 0){
            new_a *= 10;
            temp_a /= 10;
        }
        new_a += a/10;
        if (new_a > b){
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}