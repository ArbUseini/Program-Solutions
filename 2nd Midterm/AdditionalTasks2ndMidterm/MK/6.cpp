#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int par(int arr[], int n){
    for (int i = 0; i < n; i++){
        int count(0);
        for (int j = i; arr[i] == arr[j]; j++){
            count++;
        }
        if (count % 2 == 0){
            return arr[i];
        }
        i +=count -1;
    }
    return 0;
}

int main(){
    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int result(par(arr, n));
    if (result == 0){
        cout << "Nitu eden element ne se pojavuva paren broj pati!";
        return 0;
    }
    cout << "Najmaliot element koj se pojavuva paren broj pati e " << result;
}