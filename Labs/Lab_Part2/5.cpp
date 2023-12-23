#include <iostream>
using namespace std;

int main(){
    int size(0);
    int arr[100];
    int number;
    while (cin >> number){
        if (number == -1){break;}
        arr[size++] = number;
    }
    for (int k = 0; k < 3; k++){
        int l, r ,v , i;
        cin >> l >> r >> v >> i;
        if (i){
            l++;
            r--;
        }
        for (int j = l; j <= r; j++){
            arr[j] += v;
        }
    }
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}