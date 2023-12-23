#include <iostream>
using namespace std;

int isInteresting(int number){
    int pair(-1);
    while (number){
        if (number % 2 == pair){
            return 0;
        }
        pair = number % 2;
        number/=10;
    }
    return 1;
}
void printArray(int numbers[], int n){
    if (n < 0){
        return;
    }
    cout << numbers[n] << endl;
    printArray(numbers, n-1);
}

int main(){
    int n;
    cin >> n;
    int index(-1);
    int arr[100];
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        if (isInteresting(num)){
            arr[++index] = num;
        }
    }
    printArray(arr, index);
}