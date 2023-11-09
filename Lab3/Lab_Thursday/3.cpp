#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double sum(0);
    for (int i = 0; i < 3; i++){
        double current;
        char ch_current;
        cin >> current >> ch_current;
        if (current < 0){
            continue;
        }
        if (current > 30000){
            current = 30000;
        }
        if (ch_current == 'A'){
            sum += current*0.18;
        }
        else if (ch_current == 'B'){
            sum += current*0.1;
        }
        else if (ch_current == 'C'){
            sum += current*0.05;
        }
        else if (ch_current != 'D'){
            sum += current*0.15;
        }
    }
    cout << "Total VAT of the receipts is equal to: " << sum << "den." << endl;
    if (sum * 0.15 > 2100){
        sum = 2100;
    }
    else{
        sum *= 0.15;
    }
    cout << "Total refund VAT of the receipts is equal to: " << sum << "den.";
    return 0;
}