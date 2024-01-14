#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int idx;
    int sum;
    bool flag(true);
    for (int j = 0; j < m; j++){
        int collect(0);
        for (int i = 0; i < n; i++){
            collect += arr[i][j];
        }
        if (collect < sum || flag){
            flag = false;
            sum = collect;
            idx = j;
        }
    }
    cout << idx;
}