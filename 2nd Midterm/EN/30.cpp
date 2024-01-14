#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100];
    int hash[10]{0};
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        hash[arr[i]]++;
    }
    int max_i(-1), max(-1);
    int min_i(-1), min(-1);
    for (int i = 1; i < 10; i++) {
        if (hash[i] >= max) {
            max = hash[i];
            max_i = i;
        }
    }
    for (int i = 1; i < 10; i++) {
        if (hash[i] > min && i != max_i) {
            min = hash[i];
            min_i = i;
        }
    }
    for (int i = 0; i < min_i; i++){
        for (int j = 0; j < max_i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}