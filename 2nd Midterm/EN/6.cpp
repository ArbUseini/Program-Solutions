#include <iostream>
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
    int x, y;
    cin >> x >> y;
    for (int i = x; i < n && arr[i][y] == 0; i++){
        if (i == x){continue;}
        arr[i][y] = 1;
    }
    for (int i = x; i >= 0 && arr[i][y] == 0; i--){
        if (i == x){continue;}
        arr[i][y] = 1;
    }
    for (int j = y; j < m && arr[x][j] == 0; j++){
        if (j == y){continue;}
        arr[x][j] = 1;
    }
    for (int j = y; j >= 0 && arr[x][j] == 0; j--){
        if (j == y){continue;}
        arr[x][j] = 1;
    }
    arr[x][y] = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}