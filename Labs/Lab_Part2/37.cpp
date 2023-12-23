#include <iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    for (int l = 0; l < m; l++){
        int n;
        cin >> n;
        int arr[100], k;
        for (int i = 1; i <= n; i++){
            cin >> arr[i];
        }
        cin >> k;
        for (int i = 1; i <= n; i++){
            if (i % k == 0){
                arr[i] *= (i);
                if (i == n){
                    arr[i] += arr[i-1];
                }
                else{
                    arr[i] -= arr[i+1];
                }
            }
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}