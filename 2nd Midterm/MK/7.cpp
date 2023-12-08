#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int **arr = new int*[n];
    double *mean = new double[n]{0};
    int *min = new int[n];
    int *max = new int[n];
    int *min_idx = new int[n];
    int *max_idx = new int[n];
    bool *flag = new bool[n]{0};
    for (int i = 0; i < n; i++){
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
            mean[i] += arr[i][j];
            if (!flag[i]){
                min[i] = arr[i][j];
                min_idx[i] = j;
                max[i] = arr[i][j];
                max_idx[i] = j;
                flag[i] = 1;
            }
            else if (min[i] > arr[i][j]){
                min[i] = arr[i][j];
                min_idx[i] = j;
            }
            else if (max[i] < arr[i][j]){
                max[i] = arr[i][j];
                max_idx[i] = j;
            }
        }
        mean[i] /= m;
    }
    for (int i = 0; i < n; i++){
        if (abs(mean[i] - min[i]) == abs(mean[i] - max[i])){
            (min_idx[i] > max_idx[i])? cout << max[i] << " " : cout << min[i] << " ";
            continue;
        }
        (abs(mean[i] - min[i]) < abs(mean[i] - max[i]))? cout << max[i] << " " : cout << min[i] << " ";
    }
    for (int i = 0; i < n; i++){
        delete[] arr[i];
    }
    delete[] arr;
    delete[] mean;
    delete[] min;
    delete[] max;
    delete[] min_idx;
    delete[] max_idx;
    delete[] flag;
    return 0;
}