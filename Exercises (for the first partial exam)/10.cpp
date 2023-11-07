/*
* Write a program in which from the standard input you read one positive integer z,
* and afterwards you read one after another pairs of integers (a, b).
* Thereby, the loop should end if you read the pair (0, 0). 
* The program should calculate how many times the integer z is equal to the sum of the pairs a and b,
* as well as the percentage of the pairs (a,b) that give sum equal to z (NOTE: the pair (0,0) is not taken into account when doing calculations!).

* For example:

* Input:    /    Result:  
* 100       /    You entered 2 pairs of numbers that have a sum equal to 100
* 50 50     /    The percentage of pairs with sum 100 is 50%
* -50 -50   /
* -99 199   /
* 32 98     /
* 0 0       /

* */
#include <iostream>
using namespace std;

int main(){ //smoking kills
    int z, a, b, count(0), total(0);
    cin >> z >> a >> b;
    if (a == b && b == 0){cout << "You entered 0 pairs of numbers that have a sum equal to "<< z << endl <<"The percentage of pairs with sum " << z << " is 0%";return 0;}
    while (a != 0 || b != 0){
        total++;
        if (a+b == z){
            count++;
        }
        cin >> a >> b;
    }
    cout << "You entered " << count << " pairs of numbers that have a sum equal to "<< z  << endl <<"The percentage of pairs with sum " << z << " is "<< count*1.0/total*100 << "%";
    return 0;
}
