#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] % 2 == 1){
            arr[i]--;
        }else{
            arr[i]++;
        }
        cout << arr[i] << " ";
    }
}