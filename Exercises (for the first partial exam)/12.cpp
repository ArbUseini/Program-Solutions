/* *
* A whole number N greater then 0 is entered from the SI followed by N pairs of natural numbers greater than 10.
* Write a program that for every pair of entered numbers
* will check if the number obtained by moving the last digit of the first number on its first place is greater that the second number in the pair or not. 
* Print YES if the condition is satisfied or NO if the condition is not satisfied on the standard output in a single line for each pair of numbers.
* 
* (Example for moving the last digit of a number on its first place: 1234 -> 4123, 98700 -> 9870). If the numbers 3456 and 6210 are entered as a pair YES should be printed since 6345 > 6210.
* 
* For example:
* 
* Input:    /    Result:
* 4         /    
* 56 4532   /    NO
* 423 90    /    YES
* 90 300    /    NO
* 543 300   /    YES
* */
#include <iostream>
using namespace std;

int main(){ //smoking kills
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        int new_a(a%10), temp_a(a/10);
        while (temp_a != 0){
            new_a *= 10;
            temp_a /= 10;
        }
        new_a += a/10;
        if (new_a > b){
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}
