#include <iostream>
#include <cmath>
using namespace std;

void is_prime(int num){
    bool prime(true);
    if (num == 1){
        prime = false;
    }
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
            prime = false;
            break;
        }
    }
    if (prime){
        cout << "brojot " << num << " e prost" << endl;
    }else{
        cout << "brojot " << num << " NE e prost" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i+=2){
        int num(arr[i]);
        if (i != n-1){
            num = num*10 + arr[i+1];
        }
        is_prime(num);
    }
}