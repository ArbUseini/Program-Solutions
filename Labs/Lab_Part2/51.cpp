#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            if (arr[i][j] % 2 == 0){
                cout << i+j << " ";
                continue;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}