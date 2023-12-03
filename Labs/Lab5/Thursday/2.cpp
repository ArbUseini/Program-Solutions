#include <iostream>
using namespace std;

int reverseNumber(int number){
    int rev(0);
    while (number){
        rev *= 10;
        rev += number%10;
        number /= 10;
    }
    return rev;
}
int sumOfDigits(int number){
    int sum(0);
    while (number){
        sum += number%10;
        number /= 10;
    }
    return sum;
}
void printInInterval(int a, int b){
    for (int i = a; i <= b; i++){
        if (i % reverseNumber(sumOfDigits(i)) == 0){
            cout << i << endl;
        }
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    printInInterval(a, b);
    return 0;
}