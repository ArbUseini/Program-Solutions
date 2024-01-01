#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arra[200][200];
    int arr[200]{0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arra[i][j];
            int combo(i);
            if (j >= 100){
                combo = combo*1000 + j;
            }
            else if (j >= 10){
                combo = combo*100 + j;
            }
            else{
                combo = combo * 10 + j;
            }
            if (combo == arra[i][j]){
                arr[j]++;
            }
        }
    }
    for (int i = 0; i < m; i++){
        cout << arr[i] << endl;
    }
}