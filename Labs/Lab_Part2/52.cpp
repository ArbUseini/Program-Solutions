#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100][100];
    int row[100]{0}, col[100]{0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            row[i] += arr[i][j];
            col[j] += arr[i][j];
        }
    }
    bool flag(true);
    for (int i = 1; i < n; i++){
        if (row[i-1] != row[i] || col[i-1] != col[i]){
            flag = false;
            break;
        }
    }
    if (!flag || row[0] != col[0]){
        cout << "False";
        return 0;
    }
    cout << "True" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j || i+j == n-1){
                cout << row[0] << " ";
                continue;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}