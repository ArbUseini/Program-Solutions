#include <iostream>
#include <cmath>
using namespace std;

void finki(double arr[], int n){
    double max(arr[0]);
    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++){
        arr[i] = round(arr[i]/max*10000) / 100;
        printf("%.2f ", arr[i]);
    }
}

int main(){
    int n;
    double arr[100];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    finki(arr, n);
}