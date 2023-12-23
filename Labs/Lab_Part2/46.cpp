#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100][100];
    int sum[100]{0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            if (i > j && i + j >= n){
                arr[i][j] *= (-1);
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}