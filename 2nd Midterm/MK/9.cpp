#include <iostream>
using namespace std;

double one_over(int arr[], int i, int n){
    if (i == n){
        return arr[i];
    }
    return arr[i] + 1.0/one_over(arr, i+1, n);
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << one_over(arr, 0, n-1);
    delete[] arr;
    return 0;
}