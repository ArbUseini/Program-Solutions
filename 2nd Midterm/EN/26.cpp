#include <iostream>
using namespace std;

int main(){
    int n, m, edge_case(1);
    cin >> n >> m;
    int arr[100][100];
    // if you want to create an array with the elements just make it 10000 and you are done
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int count(0);
            for (int l = 0; l < m; l++){
                if (arr[i][j] == arr[i][l])count++;
            }
            if (count == 1){
                cout << arr[i][j] << " ";
                edge_case = 0;
            }
        }
    }
    if (edge_case){
        cout << "N";
    }
}