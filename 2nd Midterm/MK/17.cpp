#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int **arr = new int*[n];
    for (int i = 0; i < n; i++){
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        int sum(0), start, end;
        double middle = m/2.0;
        if (middle != ceil(middle)){
            start = end = floor(middle);
        }
        else{
            start = end = ceil(middle);
            end--;
        }
        for (int j = 0; j < start; j++){
            sum += arr[i][j];
        }
        for (int j = end + 1; j < m; j++){
            sum -= arr[i][j];
        }
        if (middle == ceil(middle)){
            start = middle - 1;
            end = middle;
        }
        for (int j = start; j < end + 1; j++){
            arr[i][j] = abs(sum);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}