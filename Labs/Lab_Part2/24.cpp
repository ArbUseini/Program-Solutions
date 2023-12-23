#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100];
    cin >> arr[0];
    cout << "Vnesenata niza e:" << endl;
    cout << arr[0] << " ";
    for (int i = 1; i < n; i++){
        cin >> arr[i];
        cout << arr[i] << " ";
        arr[i] += arr[i-1];
    }
    for (int i = 0; i < n; i++){
    }
    cout << endl << "Novata niza e:" << endl;

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}