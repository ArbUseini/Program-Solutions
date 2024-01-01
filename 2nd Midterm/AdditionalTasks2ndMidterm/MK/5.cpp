/*
I have no idea why one of the test cases doesn't work maybe cuzz of the data type 
*/

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    double arr[100][100];
    double arra[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            arra[i][j] = arr[i][j];
        }
    }
    int r_s, c_s;
    cin >> r_s >> c_s;
    int r_e, c_e;
    cin >> r_e >> c_e;
    for (int i = r_s; i <= r_e; i++){
        for (int j = c_s; j <= c_e; j++){
            long double sum(0);
            for (int k = max(0, i-1); k <= min(i+1, n-1); k++){
                for (int l = max(0, j-1); l <= min(j+1, m-1); l++){
                    sum += arr[k][l];
                }
            }
            sum /= (min(i+1, n-1)-max(0, i-1) + 1) * (min(j+1, m-1)-max(0, j-1) + 1);
            arra[i][j] = sum;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arra[i][j] << " ";
        }
        cout << endl;
    }
}