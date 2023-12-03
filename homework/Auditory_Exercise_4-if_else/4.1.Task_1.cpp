#include <iostream>
using namespace std;

int main(){
    int a, b, c; // pls add sides of length >0
    cin >> a >> b >> c;
    if (c < a){
        int temp = c;
        c = a;
        a = c;
    }
    if (c < b){
        int temp = c;
        c = b;
        b = c;
    }
    if (c*c == a*a + b*b){
        cout << "right-angled";
    }
    else if (c*c > a*a + b*b){
        cout << "obtuse-angled";
    }
    else{
        cout << "acute-angled";
    }
    return 0;
}