#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[100][100], cop[100][100];
    cin >> n;
    for (int i = 0; i < n; i++){
        int min, max;
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            cop[i][j] = arr[i][j];
            if (j == 0){
                min = max = cop[i][j];
            }
            else if (min > cop[i][j]){
                min = cop[i][j];
            }
            else if (max < cop[i][j]){
                max = cop[i][j];
            }
        }
        for (int j = 0; j < n; j++){
            if (cop[i][j] == min){
                arr[i][j] = 0;
            }
            else if (cop[i][j] == max){
                arr[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}