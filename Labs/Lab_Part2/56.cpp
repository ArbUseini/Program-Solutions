#include <iostream>
using namespace std;
int main(){
    int n, y;
    cin >> n;
    //2d array
    int **arr = new int* [n];
    for (int i = 0; i < n; i++){
        arr[i] = new int [n];
    }
    //2d array done
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    cin >> y;
    for(int i = 0; i < n; i++){
        int temp = arr[i][y];
        arr[i][y] = arr[i][i];
        arr[y][i] = arr[i][i];
        arr[i][i] = temp;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //dont forget to deallocate the memory
    for (int i = 0; i < n; i++){
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}