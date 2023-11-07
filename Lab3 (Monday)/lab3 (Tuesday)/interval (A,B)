#include <iostream>
using namespace std;
/* write a program that takes two inputs a,b and in the interval from a to b it sums up all the numbers divisible by 3 that are also not divisible by 2 */
int main() {
    int a, b; // variables 
    int total = 0; // counter 
    cin >> a >> b; // reads input from user 
    for(int i = a; i <= b; i++ ){
        if (i %3 == 0 && i %2 != 0){ // checks divisibility 
            total += i; // adds any number that passes the test into the counter 
        }
    }
    cout << total;
    return 0;
}
