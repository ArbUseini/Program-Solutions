#include <iostream>
using namespace std;

void form(int n){
    if (!n){
        return;
    }
    cout << '*';
    form(n-1);
}

int main(){
    int a;
    cin >> a;
    for (int i = 0; i < a; i++){
        form(a-i);
        cout << endl;
    }
}