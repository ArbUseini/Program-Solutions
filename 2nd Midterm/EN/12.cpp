#include <iostream>
using namespace std;

void dothething(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        if (arr[i] == arr[i+1]){
            arr[i] *=2;
            arr[i+1] = 0;
        }
    }
    for (int i = 0; i < n; i++){
        if (!arr[i]){
            for (int j = i+1; j < n; j++){
                arr[j-1] = arr[j];
            }
            arr[n-1] = 0;
            i--;
            n--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    dothething(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}