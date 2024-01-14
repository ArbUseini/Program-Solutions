#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool arr[100][100];
    bool hai[100][100]; //no need but I'll do as they say
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j]){
                hai[i][j] = 1;
                continue;
            }
            int sum(0);
            if (i-1 >= 0){
                sum += arr[i-1][j];
            }
            if (j-1 >= 0){
                sum += arr[i][j-1];
            }
            if (i+1 < n){
                sum += arr[i+1][j];
            }
            if (j+1 < n){
                sum += arr[i][j+1];
            }
            hai[i][j] = sum >= 3;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << hai[i][j] << " ";
        }
        cout << endl;
    }
}