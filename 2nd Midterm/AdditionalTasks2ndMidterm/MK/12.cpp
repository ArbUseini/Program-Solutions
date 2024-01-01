#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    for (int i = 0; i < n; i++){
        int result(0);
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            if ((i+j)%2 == arr[i][j]%2){
                result++;
            }
        }
        cout << i << ": " << result << endl;
    }
}