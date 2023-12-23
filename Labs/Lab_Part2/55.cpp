#include <iostream>
using namespace std;
int main(){
    int n, min;
    cin >> n;
    int arr[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            if (i%2 == 0){
                if (j == 0){
                    min = arr[i][j];
                }
                else if(min > arr[i][j]){
                    min = arr[i][j];
                }
            }
            else{
                arr[i][j] += min;
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