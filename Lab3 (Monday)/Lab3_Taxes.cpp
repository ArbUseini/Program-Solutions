#include <iostream>
using namespace std;

/*

This is also correct

*/

int main() {
    int percentage1, threshold1; //this is for the first breakpoint of the income
    int percentage2, threshold2; //this is for the second breakpoint of the income
    int percentage_left, salary; //this is for the rest of the income
    double sum(0); // this should be a double because of the prcentages
    cin >> percentage1  >> threshold1 >> percentage2 >> threshold2 >> percentage_left >> salary;
    threshold2 -= threshold1; // this is to know how much money can be taxed after the first threshold (threshold1)
    if (salary > 0){ // checking if there is anything to tax
        if (salary > threshold1){
            sum += threshold1 * percentage1 / 100.0; // 100.0 because I want a double added to the sum
            salary -= threshold1;
        }
        else{
            sum += salary * percentage1 / 100.0;
            salary = 0;
        }
    }
    if (salary > 0){ // checking if there is anything to tax
        if (salary > threshold2){
            sum += threshold2 * percentage2 / 100.0; // 100.0 because I want a double added to the sum
            salary -= threshold2;
        }
        else{
            sum += salary * percentage2 / 100.0;
            salary = 0;
        }
    }
    if (salary > 0){ // checking if there is anything to tax
        sum += salary * percentage_left / 100.0; // the rest of the money
    }
    cout << sum;
    return 0;
}
