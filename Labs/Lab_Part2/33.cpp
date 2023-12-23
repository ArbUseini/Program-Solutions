#include <iostream>
using namespace std;

int main(){
    int n(0);
    int arr[100];
    for (; cin >> arr[n]; n++){}
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] == arr[j]){
                arr[j] += (j-i);
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}