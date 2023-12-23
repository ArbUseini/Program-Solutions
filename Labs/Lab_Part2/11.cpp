#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100][100];
    for (int i = 0; i < n; i++){
        int sum(0);
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            if (i < j){
                sum += arr[i][j];
            }
        }
        if (i == n-1){continue;}
        if (sum != arr[i][i]){
            cout << -1;
            return 0;
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