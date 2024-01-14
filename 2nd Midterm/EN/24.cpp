#include <iostream>
using namespace std;

bool rec(int num, bool i){
    if (num < 10){
        return num%2;
    }
    if (i){
        return !(num%2) && rec(num/10, false);
    }
    return rec(num/10, false);
}

int main(){
    int n;
    cin >> n;
    int count(0);
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        if (num < 10)continue;
        if (rec(num, true)){
            cout << num << endl;
            count++;
        }
    }
    if (!count){
        cout << "No such elements!";
    }
}