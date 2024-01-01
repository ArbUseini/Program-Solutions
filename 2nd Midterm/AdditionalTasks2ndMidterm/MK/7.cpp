#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

void premesti(int arr[], int n){
    int ignore(0);
    for (int i = 0; i + ignore < n; i++){
        if (arr[i] < 0){
            ignore++;
            int temp(arr[i]);
            for (int j = i; j < n - 1; j++){
                arr[j] = arr[j+1];
            }
            arr[n-1] = temp;
            i--;
        }
    }
}

int main(){
    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    premesti(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}