#include <iostream>
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
    int count(0);
    for (int i = 0; i < n ; i++){
        if (arr[i][i]){
            count++;
        }
    }
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            if (arr[i][j] != arr[j][i]){
                count++;
            }
        }
    }
    cout << count;
}