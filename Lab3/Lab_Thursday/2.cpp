#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    int point = a1 + a2 + a3 + a4 + a5;
    int grade = ceil(point/10.0);
    if (grade >= 10) { cout << "Ocenka: 10, poeni: " << point; }
    else if (grade < 5){
        cout << "Predmetot ne e polozen";
    }
    else {
        cout << "Ocenka: " << grade << ", poeni: " << a1 + a2 + a3 + a4 + a5 << endl;
        (point%10 == 0)? cout << "Ima uslov za povisoka ocenka" : cout << "Nema uslov za povisoka ocenka";
    }
    return 0;
}
