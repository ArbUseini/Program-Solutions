#include <iostream>
using namespace std;

int Odd(int a[], int n){
    if (n < 0){
        return 0;
    }
    return (a[n] % 2)? 1+Odd(a, n-1) : Odd(a, n-1);
}

int main(){
    int n;
    int arr[100];

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << Odd(arr, n-1);
}