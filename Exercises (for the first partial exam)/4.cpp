#include <iostream>
#include <cmath>
using namespace std;

int main(){ //smoking kills
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        double x, y; // pair <double, double> points(;-;)
        cin >> x >> y;
        double points (x/y *100);
        cout << points << " ";
        if (points >= 90){
            cout << 10 << endl;
            continue;
        }
        else if (points < 50){
            cout << "FAIL\n";
            continue;
        }
        cout << floor(points/10)+1 << endl; //#include <cmath> ----> to get access to the func floor()
    }
    return 0;
}