#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    int r, c;
    cin >> r >> c;
    int min;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            if (i == 0 & j == 0){
                min = arr[i][j];
            }
            if (min > arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i < r && j < c){
                cout << min << " ";
            }
            else{
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}