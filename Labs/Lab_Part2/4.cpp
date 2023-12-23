#include <iostream>
#include <cmath>
using namespace std;

void i_need_a_wife(int result[], int arr[], int hai[], int n, int m, int i, int j){
    if (i + j == n + m){
        return;
    }
    if (m == j){
        result[i+j] = arr[i];
        i_need_a_wife(result, arr, hai, n , m, i+1, j);
    }
    else if (n == i){
        result[i+j] = hai[j];
        i_need_a_wife(result, arr, hai, n , m, i, j+1);
    }
    else{
        if (arr[i] < hai[j]){
            result[i+j] = arr[i];
            i_need_a_wife(result, arr, hai, n , m, i+1, j);
        }else{
            result[i+j] = hai[j];
            i_need_a_wife(result, arr, hai, n , m, i, j+1);
        }
    }
}

int main(){
    int n, m;
    int arr[100], hai[100];
    int result[100];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> hai[i];
    }
    i_need_a_wife(result, arr, hai, n , m, 0, 0);
    for (int i = 0; i < n+m; i++){
        cout << result[i] << " ";
    }
}