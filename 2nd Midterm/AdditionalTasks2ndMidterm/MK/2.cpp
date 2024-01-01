#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
    int num;
    int arr[100][100];
    cin >> num;
    int n(ceil(sqrt(num)));
    int count(1);
    for (int i = 0; i < n ; i++){
        if (count > num){break;}
        if (i % 2 == 0){
            for (int j = 0; j < n; j++){
                if (count > num){continue;}
                arr[i][j] = count++;
            }
        }
        else{
            for (int j = n-1; j >= 0; j--){
                if (count > num){continue;}
                arr[i][j] = count++;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
