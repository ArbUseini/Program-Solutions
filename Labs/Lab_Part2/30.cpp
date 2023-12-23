#include <iostream>
#include <cmath>
using namespace std;

int reverseNumber (int number){
    int m(0);
    while (number){
        m = m*10 + number%10;
        number /= 10;
    }
    return m;
}
bool isPalindrome(int number){
    int m(reverseNumber(number));
    return (m == number)? true : false;
}
int containsDigits(int number){
    if (number == 0){
        return true;
    }
    return (number%10) < 5 && containsDigits(number/10);
}

int main(){
    int a, b;
    cin >> a >> b;
    if (a < 10){a = 10;}
    for (; a <= b; a++){
        if (isPalindrome(a) && containsDigits(a)){
            cout << a << endl;
        }
    }
    
}