#include <iostream>
#include <cstring>
using namespace std;

void right(int arr[], int n, int shift){
    for (int s = 0; s < shift; s++){
        for (int i = n-1; i > 0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = 0;
    }
}

void left(int arr[], int n, int shift){
    for (int s = 0; s < abs(shift); s++){
        for (int i = 0; i < n-1; i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = 0;
    }
}

int main(){
    int t;
    cin >> t;
    int count(0);
    while (t--){
        int n;
        cin >> n;
        int arr[100];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        if (abs(arr[0]) >= n){
            for (int i = 0; i < n; i++){
                cout << 0 << " ";
            }
            cout << endl;
            count++;
            continue;
        }
        if (arr[0] > 0){
            right(arr, n, arr[0]);
        }
        else if (arr[0] < 0){
            left(arr, n, arr[0]);
        }
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    cout << count;
}