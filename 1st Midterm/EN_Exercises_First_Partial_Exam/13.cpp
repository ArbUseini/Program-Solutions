/* * 
*Sweet number is number that contains only even digits (0, 2, 4, 6, 8).
*In given range (m and n read from SI) find the smallest "sweet number".
*If there is no such number, print NSN.
*
*For example:
*
*Input:    /    Result:
*1000 5000 /    2000
* */
#include <iostream>
using namespace std;


int main(){ //smoking kills
    int a, b;
    cin >> a >> b;
    for (/*don't need anything here*/; a <= b; a++){
        int temp = a;
        bool good(true);
        while (temp > 0){
            if (temp%2 != 0){
                good = false;
                break;
            }
            temp /= 10;
        }
        if (good){
            cout << a;
            return 0;
        }
    }
    cout << "NSN";
    return 0;
}
