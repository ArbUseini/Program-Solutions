#include <iostream>
using namespace std;

int main(){
    int n, k(0);
    double arr[100][100], hai[1000];
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            if (i == 0 || i == n-1 || i+j == n-1){
                hai[k++] = arr[i][j];
            }
        }
    }
    for (int i = 0; i < k; i++){
        cout << hai[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == 0 || i == n-1 || i+j == n-1){
                arr[i][j] = hai[--k];
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}