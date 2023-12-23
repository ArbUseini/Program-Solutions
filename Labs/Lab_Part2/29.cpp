#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, k, count(0);
    cin >> n >> k;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] == k){
            count++;
        }
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Brojot " << k << " vo nizata se naogja " << count << " pati.";
}