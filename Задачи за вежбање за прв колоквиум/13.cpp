#include <iostream>
using namespace std;

int main(){ //smoking kills
    int n, max(0);
    cin >> n;
    while (!cin.fail()){
        if(n < 0){cin >> n; continue;}
        int print_n(n), sum(max);
        max = 0;
        while (n != 0){
            if (n%10 > max){
                max = n % 10;
            }
            sum += n%10;
            n /= 10;
        }
        cout << print_n << ": " << sum << endl;
        cin >> n;
    }
    return 0;
}