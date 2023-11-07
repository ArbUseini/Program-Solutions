/* *
*One number is interesting if his flipped number is divisible by the number of digits it contains.
*The flipped number is composed from the same digits, but in opposite order (ex. 653 is flipped of the number 356).
*Read from SI one integer n ( n > 9).
*Find and print the largest integer small than n that is "interesting".
*If the read number is not valid print a message "The number is invalid".
*
*For example:
*
*Input:    /	Result:
*5         /    The number is invalid
* */
#include <iostream>
using namespace std;

int main(){ //smoking kills
    int t;
    cin >> t;
    if (t < 10){
        cout << "The number is invalid";
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
