#include <iostream>
using namespace std;

int main(){
    int n, m;
    int arr[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0 ; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int sym(1);
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            if (arr[i][j] != arr[j][i]){
                sym = -1;
            }
        }
    }
    cout << sym << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0 ; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}