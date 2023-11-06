#include <iostream>
using namespace std;

int main(){ //smoking kills
    int a, b, count(0);
    cin >> a >> b;
    if (a < 100){a=100;}
    for (/*don't need anything here*/; a <= b; a++){
        int sharpy(a%10), middle(0), p(a);
        p /= 10;
        while (!(p > 0 && p < 10)){
            middle *= 10;
            middle += p%10;
            p /= 10;
        }
        if (middle == 0){continue;}
        sharpy += p;
        if (middle % sharpy == 0){
            count++;
            cout << a << " -> (" << middle << " == (" << sharpy-p << " + " << p << ") * " << middle/sharpy << ")" << endl;
        }
    }
    cout << count;
    return 0;
}