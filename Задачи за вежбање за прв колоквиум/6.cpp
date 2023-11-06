#include <iostream>
using namespace std;

int main(){ //smoking kills
    int z, a, b, count(0), total(0);
    cin >> z >> a >> b;
    if (a == b && b == 0){cout << "Vnesovte 0 pairs parovi od broevi chij zbir e "<< z << endl <<"Procentot na parovi so zbir " << z << " e 0%";return 0;}
    while (a != 0 || b != 0){
        total++;
        if (a+b == z){
            count++;
        }
        cin >> a >> b;
    }
    cout << "Vnesovte " << count << " parovi od broevi chij zbir e "<< z  << endl <<"Procentot na parovi so zbir " << z << " e "<< count*1.0/total*100 << "%";
    return 0;
}