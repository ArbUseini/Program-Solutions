#include <iostream>
using namespace std;

int main(){ //smoking kills
    int n, x;
    cin >> n >> x;
    while (n--){
        int temp_x(x);
        bool print(true);
        while (temp_x != 0){
            int temp_n(n);
            while (temp_n != 0){
                if (temp_n%10 == temp_x%10){
                    print = false;
                    break;
                }
                temp_n /= 10;
            }
            if (print){
                temp_x /= 10;
                continue;
            }
            break;
        }
        if (print){cout << n; return 0;}
    }
    return 0;
}