#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    int hai[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int sum(0);
            if (i-1 >= 0){
                if (arr[i-1][j] > 0){
                    sum +=arr[i-1][j];
                }
            }
            if (i+1 < n){
                if (arr[i+1][j] > 0){
                    sum +=arr[i+1][j];
                }
            }
            if (j-1 >= 0){
                if (arr[i][j-1] > 0){
                    sum +=arr[i][j-1];
                }
            }
            if (j+1 < m){
                if (arr[i][j+1] > 0){
                    sum +=arr[i][j+1];
                }
            }
            hai[i][j] = sum;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << hai[i][j] << " ";
        }
        cout << endl;
    }
}