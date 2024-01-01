#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100][100];
    int hai[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            hai[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){ //main diagonal
        int sum(0);
        for (int j = i+1; j < n; j++){
            sum += hai[i][j];
        }
        for (int j = 1; i - j >= 0; j++){
            sum += hai[i - j][i];
        }
        arr[i][i] = sum;
    }
    for (int i = 0; i < n; i++){ //anti diagonal
        int sum(0);
        for (int j = 0; j < n - 1 - i; j++){
            sum += hai[i][j];
        }
        for (int j = 1; i + j < n; j++){
            sum += hai[i + j][n - 1 - i];
        }
        if (i + i == n - 1){
            arr[i][i] += sum;
            continue;
        }
        arr[i][n - 1 - i] = sum;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}