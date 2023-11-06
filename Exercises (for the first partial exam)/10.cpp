#include <iostream>
using namespace std;

int main(){ //smoking kills
    int z, a, b, count(0), total(0);
    cin >> z >> a >> b;
    if (a == b && b == 0){cout << "You entered 0 pairs of numbers that have a sum equal to "<< z << endl <<"The percentage of pairs with sum " << z << " is 0%";return 0;}
    while (a != 0 || b != 0){
        total++;
        if (a+b == z){
            count++;
        }
        cin >> a >> b;
    }
    cout << "You entered " << count << " pairs of numbers that have a sum equal to "<< z  << endl <<"The percentage of pairs with sum " << z << " is "<< count*1.0/total*100 << "%";
    return 0;
}