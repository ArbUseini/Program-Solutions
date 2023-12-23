#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100][100];
    if (n % 2 == 1){
        cout << "GRESKA";
        return 0;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = n/2; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[n - 1 - i][j] += arr[i][j];
        }
    }
    for (int i = 0; i < n/2; i++){
        for (int j = n/2; j < n; j++){
            arr[i][n - 1 - j] += arr[i][j];
        }
    }
    for (int i = 0; i < n/2; i++){
        for (int j = 0; j < n/2; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}