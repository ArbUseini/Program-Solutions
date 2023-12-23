#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    double arr[100];
    double sum(0);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sum/=n;
    double close = arr[0];
    for (int i = 1; i < n; i++){
        if (abs(sum - arr[i]) < abs(sum - close)){
            close = arr[i];
        }
    }
    printf("%.2f", close);
    return 0;
}