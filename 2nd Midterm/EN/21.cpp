#include <iostream>
#include <cmath>
using namespace std;

int rec(int arr[], int n, int i){
    if (i == n){
        return 0;
    }
    // idk if they want me to code a max function but I'm not gonna do that
    if (arr[i] >= arr[n-1-i]){
        arr[n-1-i] = arr[i];
        return rec(arr, n, i+1);
    }
    arr[i] = arr[n-1-i];
    return 1 + rec(arr, n, i+1);
}

int main(){
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = rec(arr, n, 0);
    cout << result << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}