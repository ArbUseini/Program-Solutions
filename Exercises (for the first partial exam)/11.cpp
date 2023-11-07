/* *
* Three natural numbers А, B and C are entered from the SI.
*
* Write a program that will check if the three entered numbers can represent the values of the angles (in degrees) of a triangle.
* If the values can represent angles of a triangle print YES in the first line of the standard output followed by type of the triangle (RIGHT, ACUTE or OBTUSE) in the next line.
* If triangle is not possible with the tree given angles print NO in a single line.
* 
* 
* Example 1:
* 
* 60 40 80
* YES
* ACUTE
* 
* Example 2:
* 
* 100 50 30
* YES
* OBTUSE
* 
* Example 3:
* 100 50 50
* NO
* 
* */
#include <iostream>
using namespace std;

int main(){ //smoking kills
    int a, b, c;
    cin >> a >> b >> c;
    if (a+b+c == 180){
        cout << "YES" << endl;
        if (a > 90 || b > 90 || c > 90){
            cout << "OBTUSE";
        }
        else if (a == 90 || b == 90 || c == 90){
            cout << "RIGHT";
        }
        else{
            cout << "ACUTE";
        }
        return 0;
    }
    cout << "NO";
    return 0;
}
