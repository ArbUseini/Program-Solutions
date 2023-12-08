#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    double **arr = new double*[n];
    for (int i = 0; i < n ; i++){
        arr[i] = new double[n];
    }
    double sum_up(0), sum_down(0);
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            if (i > j){sum_down += arr[i][j];}
            if (i + j > n - 1){sum_up += arr[i][j];}
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < n ; i++){
        arr[i][i] += sum_down;
    }
    for (int i = 0; i < n ; i++){
        arr[i][n-1-i] += sum_up;
    }
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}