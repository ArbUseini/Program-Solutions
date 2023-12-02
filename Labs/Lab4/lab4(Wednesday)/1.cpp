#include <iostream>
using namespace std;
/* A number is entered and then after that other numbers are entered until something that isn't a number is entered each number entered is checked for how many 
 * digits it has if it has the same amount as the first number entered it is printed on the screen */ 

int checkdigits(int num) { // checks how many digits an input has
    int count;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}
int main(){
   int x, y=1, new_num;
   cin >> x;
   int digits_original = checkdigits(x); // saving the amount of digits the first num has
   while(y > 0){// keeps going till stopped on purpose
       cin >> new_num;
       while(cin >> new_num){// keeps going till the cin can't be used (isn't an int)
           int digits_new = checkdigits(new_num); // checks the amount of digits the entered num has
       if (digits_new == digits_original){// checks if both nums have the same amount of digits
           cout << new_num << endl; // prints the num if the condition is met
       }


       }
       y -= 1;// ends the first loop if the second loop is ended (a character is entered)
   }
   return 0;
}
