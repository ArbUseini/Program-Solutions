#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << k << "-te najmali elementi se: ";
    for (int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }
    return 0;
}