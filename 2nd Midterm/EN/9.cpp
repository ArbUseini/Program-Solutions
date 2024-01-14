#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int rec(int num, int i){
    if (!num){
        return 0;
    }
    int n(num%10);
    if (n%2){
        n--;
    }
    else{
        n++;
    }
    return n*int((pow(10,i))) + rec(num/10, i+1);
}

int main(){
    int arr[1000];
    int size(0);
    int num;
    while (cin >> num){
        arr[size++] = rec(num, 1)/10;
    }
    sort(arr, arr+size);
    for (int i = 0; i < 5 && i < size; i++){
        cout << arr[i] << " ";
    }
}