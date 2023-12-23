#include <iostream>
using namespace std;

int main(){
    int n, m;
    double arr[100][100];
    double max[100];
    double min[100];
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            if (!i){
                max[j] = arr[i][j];
                min[j] = arr[i][j];
            }
            else if(max[j] < arr[i][j]){
                max[j] = arr[i][j];
            }
            else if(min[j] > arr[i][j]){
                min[j] = arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%.2f " ,(arr[i][j] - min[j])/(max[j] - min[j]));
        }
        cout << endl;
    }
    return 0;
}