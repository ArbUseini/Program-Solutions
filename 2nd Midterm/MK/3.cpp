#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int *i = arr; i < arr+n; i++){
        cin >> *i;
    }
    int start;
    cin >> start;
    if (start >= n){
        cout << 0;
        delete[] arr;
        return 0;
    }
    int sum(0);
    for (int *point = arr+start; point < arr+n; point++){
        sum += *point;
    }
    cout << sum;
    delete[] arr;
    return 0;
}