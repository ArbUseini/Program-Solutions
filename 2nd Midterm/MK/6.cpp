#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    bool **arr = new bool*[n]; 
    for (int i = 0; i < n; i++){
        arr[i] = new bool[m];
    }
    int *row = new int[n]{0}; 
    int *col = new int[m]{0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            if (arr[i][j]){
                row[i]++;
                col[j]++;
            }
            else{
                if (row[i] < 3){
                    row[i] = 0;
                }
                if (col[j] < 3){
                    col[j] = 0;
                }
            }
        }
    }
    int sum(0);
    for (int i = 0; i < n;i++){
        if (row[i] >= 3){
            sum++;
        }
    }
    for (int i = 0; i < m;i++){
        if (col[i] >= 3){
            sum++;
        }
    }
    cout << sum;
    for (int i = 0; i < n; i++){
        delete[] arr[i];
    }
    delete[] arr;
    delete[] row;
    delete[] col;
    return 0;
}