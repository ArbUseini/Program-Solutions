#include <iostream>
using namespace std;

int rec(int num){
    if (num < 2){
        return 1;
    }
    return num*rec(num-1);
}

bool strong(int num){
    int temp(num);
    int sum(0);
    while (temp){
        sum += rec(temp%10);
        temp/=10;
    }
    return num==sum;
}

int main(){
    int n;
    cin >> n;
    cout << "Strong numbers:" << endl;
    while (n--){
        int num;
        cin >> num;
        if (strong(num)){
            cout << num << endl;
        }
    }
}