#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    double sum(0);
    for (int i = 0; i < n; i++){
        int max;
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            if (j == 0){
                max = arr[i][j];
            }
            if (max < arr[i][j]){
                max = arr[i][j];
            }
            if (j == m-1){
                arr[i][j] = max;
            }
            sum += arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << sum / (n*m);
}