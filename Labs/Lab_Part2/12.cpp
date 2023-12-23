#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double arr[100][100];
    for (int i = 0; i < n; i++){
        double sum(0);
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
            if(i+j < n-1){
                sum += arr[i][j];
            }
            else if (i+j == n-1){
                sum/=j;
            }
            else{
                if (arr[i][j] < sum){
                    arr[i][j] = -1;
                }
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}