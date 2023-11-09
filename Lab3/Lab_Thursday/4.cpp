/*
MK- 
Да се напише програма што ќе ја испечати сумата на сите броеви деливи со 3 
и не делливи со 2 во интервалот [A,B). А и B се внесуваат од тастатура.
Објаснување на примерот.
А=10, B = 20. Броеви кои припаѓаат во интервалот се 10,11,12,13,..,19. 
Од нив деллив со 3 а не деллив со 2 е бројот 15, па сумата е 15. 

EN-
Write a program that will print the sum of all numbers divisible by 3 
and not divisible with 2 in the interval [A, B), where A and B are 
entered from the keyboard.
Explanation of the example:
A = 10, B = 20. The numbers that belong to the interval are 10, 11, 12, 13, .., 19.
Among them, the number divisible by 3 and not divisible by 2 is 15, so their sum is 15.

INPUT                   RESULT
10 20                   15
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, sum(0);
    cin >> a >> b;
    for (; a < b; a++){
        if (a%3 == 0 && a%2 != 0){
            sum += a;
        }
    }
    cout << sum;
    return 0;
}