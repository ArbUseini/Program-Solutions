#include <iostream>
#include <algorithm>
using namespace std;

int poramnet(int a){
    if (a == 0){
        return 0;
    }
    return (a%10 == 9)? poramnet(a/10)*10 + 7 : poramnet(a/10)*10 + a%10;
}

int main(){
    int n, size(0);
    int *arr = new int[6];
    while (cin >> n){
        int a = poramnet(n);
        if (a < arr[size-1] || size != 5){
            arr[size] = a;
            sort(arr, arr+size+1);
            if (size != 5){
                size++;
            }
        }
    }
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}