#include <iostream>
using namespace std;

/*

This is correct
Thanks Zaid ;)

*/


int main() {
    int red;
    const int first_break = 120;
    const int second_break = 210;
    const int end_of_day = 360;
    cin >> red;
    int passed_time = 0;
    for (int i = 0; i < red; i++){
        if(passed_time == first_break){
            passed_time += 30;
        }
        else if(passed_time == second_break){
            passed_time += 30;
        }
        else{
            passed_time += 5;
        }
    }
    if(passed_time >= 60) {
        if (passed_time > end_of_day) {
            cout << "Come Back Tomorrow ";
        } else {
            int hours = passed_time / 60;
            int minutes = passed_time % 60;
            cout << "The wait was " << hours << " hours and " << minutes << " minutes";
        }
    }
    else{
        cout <<  "The wait was "<< passed_time << " minutes ";
    }

    return 0;
}
