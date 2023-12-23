#include <iostream>
using namespace std;

void transform(int* arr, int n){
    int idx_min(0), idx_max(0);
    for (int i = 1; i < n; i++){
        if (arr[i] < arr[idx_min]){
            idx_min = i;
        }
        if (arr[i] > arr[idx_max]){
            idx_max = i;
        }
    }
    for (int i = 0; i < n; i++){
        if (i == idx_max || i == idx_min){
            continue;
        }
        arr[i] += arr[idx_max] - arr[idx_min];
    }
    int temp = arr[idx_max];
    arr[idx_max] = arr[idx_min];
    arr[idx_min] = temp;
}

int main(){
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    transform(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}