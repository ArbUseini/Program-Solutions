/* * 
* Read from SI two integers a and b.
* Write a program that will print all numbers from a to b (a < b), 
* such as the number created from all the digits from next to the first to the next to last digit in the original number (the digits that will remain if we remove the first and the last digit from the original number),
* reversed (read from right to left) is divisible with the number created as the sum of the first and the last digit.
* For single and two digit numbers, the number created from the middle digits is 0, 
* and these numbers are not printed. At the end print out the count of such numbers.
* 
* Example. For the number 82675 the number created from the digits from the next to the first up to the next to last digit,
* reversed is 762, and the sum of the first and the last digit is (8 + 5) = 13. 
* When printing out the numbers, next to each number that is satisfying the condition,
* print the equation of the condition in the following form:
* 
* original_number -> (reversed_middle == (last_digit + first_digit) * quotient)
* 
* for example: 291 -> (9 == (1 + 2) * 3) 84575 -> (754 == (5 + 8) * 58)
* */
#include <iostream>
using namespace std;

int main(){ //smoking kills
    int a, b, count(0);
    cin >> a >> b;
    if (a < 100){a=100;}
    for (/*don't need anything here*/; a <= b; a++){
        int sharpy(a%10), middle(0), p(a);
        p /= 10;
        while (!(p > 0 && p < 10)){
            middle *= 10;
            middle += p%10;
            p /= 10;
        }
        if (middle == 0){continue;}
        sharpy += p;
        if (middle % sharpy == 0){
            count++;
            cout << a << " -> (" << middle << " == (" << sharpy-p << " + " << p << ") * " << middle/sharpy << ")" << endl;
        }
    }
    cout << count;
    return 0;
}
