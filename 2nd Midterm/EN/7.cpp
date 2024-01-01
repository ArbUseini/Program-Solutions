#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int sum[100]{0};
    for (int i = 0; i < n / 2; i++){
        for (int j = 0; j < m; j++){
            sum[j] += arr[i][j];
        }
    }
    for (int i = ceil(n/2.0); i < n; i++){
        for (int j = 0; j < m; j++){
            sum[j] -= arr[i][j];
        }
    }
    for (int i = ceil(n/2.0-1); i <= floor(n/2.0); i++){
        for (int j = 0; j < m; j++){
            arr[i][j] = abs(sum[j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}