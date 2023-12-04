#include <iostream>
using namespace std;

void print_arr(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble_sort(int arr[], int n){ // O(n^2) -> quadratic time complexity (where n is size of arr)
    for (int j = 0; j < n-1; j++){ 
        for (int i = 0; i < n-1-j; i++){ // n-1-j cuzz n-1-j does not have a right neighbour (if j == 0) or during the j-th loop the smallest j numbers already sorted at the end of the array
            if (arr[i] < arr[i+1]){ // if you want from smallest to biggest just switch to > 
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    print_arr(arr, n);
}

void selection_sort(int arr[], int n){ // O(n^2) -> quadratic time complexity (where n is size of arr)
    for (int j = 0; j < n-1; j++){ // cuzz the last element will automaticly be in place
        int max = arr[j]; // if you want from smallest to biggest just switch to min
        int index = j;
        for (int i = j; i < n; i++){
            if (arr[i] > max){ // if you want from smallest to biggest just switch to > 
                max = arr[i];
                index = i;
            }
        }
        int temp = arr[j];
        arr[j] = arr[index];
        arr[index] = temp;
    }
    print_arr(arr, n);
}

void insertion_sort(int arr[], int n){ // O(n^2) -> quadratic time complexity (where n is size of arr)
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] < arr[j]){ // if you want from smallest to biggest just switch to > 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    print_arr(arr, n);
}

int main(){
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    selection_sort(arr, n);
    insertion_sort(arr, n);
    //quick and merge sort when?
    return 0;
}