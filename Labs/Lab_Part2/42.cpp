#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] % 2 == 0){
            arr[i] += 3;
        }
        else if (arr[i] % 5 == 0){
            arr[i] -= 2;
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}