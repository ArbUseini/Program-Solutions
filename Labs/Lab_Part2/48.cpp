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
    for (int j = 0; j < m; j++){
        for (int i = 0; j-i >= 0 && i < n; i++){
            cout << arr[i][j-i] << " ";
        }
        cout << endl;
    }
}