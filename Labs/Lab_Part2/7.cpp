#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100];
    double even(0), odd(0);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i]%2){
            odd++;
        }
        else{
            even++;
        }
    }
    if (even/n * 100 > 50 && odd/n*100 < 30){ //even 70%?
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}