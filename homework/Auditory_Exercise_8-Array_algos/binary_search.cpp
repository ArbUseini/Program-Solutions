#include <iostream>
using namespace std;

int binary_search(int arr[], int start, int end, int target){
    if (start > end){
        return -1;
    }
    int middle = (start+end)/2;
    if (arr[middle] == target){
        return middle;
    }
    else if (arr[middle] > target){
        return binary_search(arr, start, middle-1, target);
    }
    return binary_search(arr, middle+1, end, target);
}

int main(){
    int arr[100];
    int n, target;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> target;
    cout << binary_search(arr, 0, n-1, target); // returns the index
    return 0;
}