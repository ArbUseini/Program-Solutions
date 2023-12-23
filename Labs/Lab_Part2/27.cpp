#include <iostream>
using namespace std;

bool divisibleByK (int number, int k){
    return (number%k == 0)? 1:0;
}

int nextDivisibleByK (int number, int k){
    if (divisibleByK(number, k)){
        return number;
    }
    return nextDivisibleByK(number+1, k);
}

int main(){
    int a, b, k;
    cin >> a >> b >> k;
    for (; a <= b; a++){
        cout << a << " -> " << nextDivisibleByK(a+1, k) << endl;
    }
}