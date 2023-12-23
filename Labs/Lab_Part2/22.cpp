#include <iostream>
using namespace std;

int rec(int n, int big_small){
    if (n == 0){
        return 0;
    }
    if (n%10 > big_small){
        return -100; /*the biggest int number is 10 digit and returning -100 
        will make any sum of digits negative*/
    }
    return rec(n/10, n%10) + n%10;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        int result = rec(a, 10);
        if (result > 0){
            cout << a << " (suma: " << result << ")" << endl;
        }
    }
}