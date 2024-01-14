#include <iostream>
#include <iomanip>
using namespace std;

int digits(int n){
    if (!n){
        return 0;
    }
    return 1 + digits(n/10);
}

int main(){
    int n;
    cin >> n;
    int arr[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int min(arr[1][0]), max(arr[0][1]);
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            arr[i][j] = max;
        }
    }
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            if (arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            arr[i][j] = min;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << setw(digits(arr[i][j])) << arr[i][j] << " ";
        }
        cout << endl;
    }
}