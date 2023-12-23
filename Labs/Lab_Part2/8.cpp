#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                arr[i][j] *= (-1);
            }
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }
}