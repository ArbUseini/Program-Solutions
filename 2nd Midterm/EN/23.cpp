#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;
    int max = -1; // since all of them are positive nothing can smaller than 0
    for (int i = 0; i < n; i++){
        int temp(arr[i]);
        int neu(0);
        int idx(0);
        while (temp){
            if (temp%10 > k){
                neu += temp%10 * int(pow(10, idx++));
            }
            temp/=10;
        }
        if (neu > max){
            max = neu;
        }
    }
    cout << max;
}