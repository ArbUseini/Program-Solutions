#include <iostream>
using namespace std;

int rec(int num, int target){
    if (num == 0){
        return 0;
    }
    return (num%10 == target)? 1+rec(num/10, target) : rec(num/10, target);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int num;
        cin >> num;
        cout << rec(num, num%10) << " ";
    }
}