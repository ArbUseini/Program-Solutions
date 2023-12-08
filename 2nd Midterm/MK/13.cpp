#include <iostream>
using namespace std;
int main(){
    int n, m, x;
    cin >> x >> n >> m;
    int **arr = new int*[n];
    int *arr_sum = new int[n]{0};
    for (int i = 0; i < n; i++){
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            arr_sum[i] += arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        int fill = (arr_sum[i] == x)? 0 : (arr_sum[i] > x)? 1 : -1;
        for (int j = 0; j < m; j++){
            cout << fill << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++){
        delete[] arr[i];
    }
    delete[] arr;
    delete[] arr_sum;
    return 0;
}