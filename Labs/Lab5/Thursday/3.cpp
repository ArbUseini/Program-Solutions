#include <iostream>
using namespace std;

int countOccurrence(int number, int digit){
    int count(0);
    while (number){
        if (number%10 == digit){
            count++;
        }
        number /= 10;
    }
    return count; 
}

int main(){
    int m, n, p, numbers(0);
    cin >> m >> n >> p;
    for (int i = 1; numbers != 10; i++){
        if (countOccurrence(m+i, n) == p){
            cout << m+i << endl;
            numbers++;
        }
    }
    return 0;
}