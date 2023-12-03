/* *
* Read from SI one integer n.
* From the integers smaller than n,
* find the one with maximum sum of divisors.
* Do not count the number itself in the sum of divisors.
* 
* For example:
* 
* Input:    /    Result:
* 50        /    48
* */    

#include <iostream>
using namespace std;

int main() {//smoking kills
    int t, absolute_sum = 0, result;
    cin >> t;

    while (t--) {
        int relative_sum = 0;
        for (int i = 2; i <= t / 2; i++) {
            if (t % i == 0) {
                relative_sum += i;
            }
        }

        if (relative_sum > absolute_sum) {
            absolute_sum = relative_sum;
            result = t;
        }
    }

    cout << result;

    return 0;
}
