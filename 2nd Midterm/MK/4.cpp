#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int **arr = new int*[n]; 
    for (int i = 0; i < n; i++){
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int pos_x, pos_y;
    cin >> pos_y >> pos_x;
    int start_y[4] = {0, 0, pos_y, pos_y};
    int start_x[4] = {pos_x, 0, 0, pos_x};
    int end_y[4] = {pos_y, pos_y, n, n};
    int end_x[4] = {m, pos_x, pos_x, m};
    for (int k = 0; k < 4; k++){
        int sum(0);
        for (int i = start_y[k]; i < end_y[k]; i++) {
            for (int j = start_x[k]; j < end_x[k]; j++) {
                sum += arr[i][j];
            }
        }
        cout << sum << " ";
    }
    for (int i = 0; i < n; i++){
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}