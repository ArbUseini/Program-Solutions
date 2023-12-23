#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n - 2; i++){
        int count(0);
        for (int j = i+1; j < n; j++){
            if (arr[i] < arr[j]){
                count++;
            }
        }
        if (count >= 2){
            cout << arr[i] << " ";
        }
    }
}