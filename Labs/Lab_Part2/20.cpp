#include <iostream>

using namespace std;

int rec(int number){
    if (number == 0){
        return 0;
    }
    return rec(number/10) + 1;
}

int fun(int number){
    int digits = rec(number);
    int rev(0), sum(0);
    for (int i = 0; i < digits/2; i++){
        rev = rev*10 + number%10;
        sum += (number%10 * 2);
        number /= 10;
    }
    if (digits % 2 == 1){
        sum += number%10;
        number /= 10;
    }
    if (rev == number){
        return sum;
    }
    return digits * (-1);
}

int main(){
    int number;
    while (cin >> number){
        int res = fun(number);
        if (res >= 0){
            cout << res << endl;
        }
        else{
            cout << res * (-1) << endl;
        }
    }   
}