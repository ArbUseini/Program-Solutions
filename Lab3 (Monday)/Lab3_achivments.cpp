#include <iostream>
using namespace std;

int main(){
    int credits, year;
    double grade;
    cin >> credits >> year >> grade;
    if (credits >= 100 && grade > 8){
        int max_credits((2023-year)*60); // calc predicted credits
        double points = (credits*1.0/max_credits)*10 + (grade - 8.5) * 6.5; // formula from the question
        if (credits >= 240) {cout << "Needs to graduate! ";}
        if (grade > 9.0) {cout << "Great Student! ";} //if both of them are true it prints both but if one needs to be printed just add else before this if
        cout << "Points: " << points;
    }
    else{cout << "Points: 0";}
    return 0;
}