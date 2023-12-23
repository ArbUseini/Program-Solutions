#include <iostream>
using namespace std;

int rec(int a, int max){
    if (!a){
        return max;
    }
    if (a % 2){
        if (max < a%10){
            max = a%10;
        }
    }
    return rec(a/10, max);
}

int main(){
    int a, b;
    cin >> a >> b;
    for (; a <= b; a++){
        int max = rec(a, 0);
        cout << a << " -> "<< max << endl;
    }
}