#include <iostream>
using namespace std;

int NumberPositive(int arr[], int n){
    if (n == -1){
        return 0;
    }
    return (arr[n] > 0)? 1 + NumberPositive(arr, n-1) : NumberPositive(arr, n-1);
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << NumberPositive(arr, n-1);
    delete[] arr;
    return 0;
}