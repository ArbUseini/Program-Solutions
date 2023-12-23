#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100];
    double sum(0);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sum /= n;
    cout << "Average price: " << sum << endl;
    for (int i = 0; i < n; i++){
        cout << (arr[i] >= sum) << " ";
    }
}