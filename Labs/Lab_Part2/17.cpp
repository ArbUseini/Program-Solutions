#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[100][100];
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] < 0){
                int sum = 0;
                if (i-1 >= 0){
                    sum += arr[i-1][j];
                }
                if (i+1 < n){
                    sum += arr[i+1][j];
                }
                if (j-1 >= 0){
                    sum += arr[i][j-1];
                }
                if (j+1 < n){
                    sum += arr[i][j+1];
                }
                arr[i][j] = sum;
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