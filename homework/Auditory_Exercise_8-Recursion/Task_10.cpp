#include <iostream>
using namespace std;

int max_num(int arr[], int s){
    if (s == 0){
        return arr[s];
    }
    arr[s-1] = (arr[s-1] > arr[s]) ? arr[s-1] : arr[s];
    return max_num(arr, s-1);
}

int main(){
    int i(0);
    int arr[100];
    for (; cin >> arr[i]; i++);
    cout << max_num(arr, i-1);
    return 0;
}