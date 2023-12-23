#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;
    int temp = arr[k];
    arr[k] = arr[k-1];
    arr[k-1] = temp;
    temp = arr[n-1-k];
    arr[n-1-k] = arr[n-k];
    arr[n-k] = temp;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}