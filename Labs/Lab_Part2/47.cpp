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
            sum[j] += arr[i][j];
        }
    }
    int index(0);
    int max = sum[0];
    for (int i = 0; i < n; i++){
        if (sum[i] > max){
            index = i;
            max = sum[i];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0 ; j < n; j++){
            if (j == index){
                arr[i][j] += max;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}