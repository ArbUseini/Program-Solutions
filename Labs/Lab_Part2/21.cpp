#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100];
    int idx_min(0), idx_max(0);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] < arr[idx_min]){
            idx_min = i;
        }
        if (arr[i] > arr[idx_max]){
            idx_max = i;
        }
    }
    cout << "MAX -> " << arr[idx_max] << endl;
    cout << "MIN -> " << arr[idx_min] << endl;

    for (int i = 0; i < n; i++){
        cout << arr[i] + arr[idx_max] - arr[idx_min] << " ";
    }
}