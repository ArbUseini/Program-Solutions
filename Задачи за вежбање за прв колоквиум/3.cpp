#include <iostream>
#include <cmath>
using namespace std;

int main(){ //smoking kills
    int t, absolute_sum(0), result;
    cin >> t;
    while(t--){
        int relative_sum(0);
        for (int i = 2; i <= sqrt(t); i++){
            if (t%i == 0){
                relative_sum += i;
                if (t/i != i){
                    relative_sum += (t/i);
                }
            }
        }
        if (relative_sum > absolute_sum){
            absolute_sum = relative_sum;
            result = t;
        }
    }
    cout << result;
    return 0;
}