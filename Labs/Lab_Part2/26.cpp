#include <iostream>
using namespace std;

void sort (int &x, int &y, int &z){
    int temp;
    if (z > x){
        temp = z;
        z = x;
        x = temp;
    }
    if (y > x){
        temp = y;
        y = x;
        x = temp;
    }
    if (z > y){
        temp = z;
        z = y;
        y = temp;
    }
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    sort(a, b, c);
    cout << a << " " << b << " " << c;
}