#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (i % 2 == 0){
            arr[i] *= 2;
        }else{
            arr[i]+=2;
        }
        cout << arr[i] << " ";
    }
}