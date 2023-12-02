#include <iostream>
using namespace std;
/* A phone call where the two phone numbers are entered and the duration of the phone call in mins is entered
 * anytime under 30 mins is calculated witha 3/min rate and anytime above is 2/min if both phone numbers have the same operators
 * the they get a 30% discount the operators are (071, 072, 073) and (074, 075, 076) */
int main() {
    int first_num , second_num , call_time; // variables
    float total = 0 ; // counter
    cin >> first_num >> second_num >> call_time; // read input
    if (call_time <= 30 ){// quick calc if the call is less than 30 mins
        total += call_time*3;
    }
    else if(call_time > 30){// adding a step if the call is longer than 30 mins
        total += 30*3; // adding the default 30 mins right away
        call_time-=30;// removing the first 30 mins from the time left
        total += call_time*2; // adding anything over 30 mins with the new calc rate
    }
    first_num/= 1000000;// getting the first 3 numbers
    second_num/= 1000000;
    if(first_num%10 == 1 || first_num%10 == 2 || first_num%10 == 3 &&second_num%10 == 1 || second_num%10 == 2 || second_num%10 == 3){
        total*=0.7; // checking if the third number is 1, 2, or 3 in both numbers if so then adding only 70% of it
    }
    else if(first_num%10 == 4 || first_num%10 == 5 || first_num%10 == 6 &&second_num%10 == 4 || second_num%10 == 5 || second_num%10 == 6) {
        total *= 0.7; // checking if the third number is 4, 5, or 6 in both numbers if so then adding only 70% of it
    }
        cout << total; // printing the total either way

    return 0;
}
