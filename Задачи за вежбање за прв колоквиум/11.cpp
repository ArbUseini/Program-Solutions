#include <iostream>
using namespace std;

int main(){ //smoking kills
    int n;
    cin >> n;
    while (!cin.fail()){
        if (n < 10){cin >> n; continue;}
        if(n%10 == n%100/10){cin >> n;continue;}
        bool print(true), smaller(n%10 < 5);
        int print_n(n);
        n/=10;
        while (n != 0){
            if (n%10 >= 5 && smaller){
                n /= 10;
                smaller = false;
            }
            else if (n%10 < 5 && !smaller){
                n /= 10;
                smaller = true;
            }
            else {
                print = false;
                break;
            }
        }
        if (print){
            cout << print_n << endl;
        }
        cin >> n;
    }
    return 0;
}