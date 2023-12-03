#include <iostream>
using namespace std;
int main() {
    int a1, a2, a3, a4, a5, a6;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
    double sum = (a1 + a2 + a3 + a4 + a5)*1.0;
    if (sum/5 > (sum+a6)/6){
        cout << "Enrolled 5 subjects\n0";
    }
    else{
        cout << "Enrolled 6 subjects" << endl;
        ((sum+a6)/6 >= 8.5)? cout << 1 : cout << 0;
    }
    return 0;
}
