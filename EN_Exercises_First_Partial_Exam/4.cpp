/*From SI are read N pairs of integers, where the first number is the students' points, and the second is the max.
 * points. Write a program where for each pair (points, max points), will print the students success in
 * percentage and his grade following these rules:

    if the student has 90% or more - "10".
    if the student has 80% or more - "9".
    if the student has 70% or more - "8".
    if the student has 60% or more - "7".
    if the student has 50% or more - "6".
    If the student has less than 50% print "FAIL".


    Input:                 Result:
            3               95          10
            19  20          67.5        7
            27  40          78.5714     8
            55  70
*/

// Link: https://courses.finki.ukim.mk/mod/quiz/attempt.php?attempt=464394&cmid=138228&page=3

#include <iostream>
#include <cmath>
using namespace std;

int main(){ //smoking kills
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        double x, y; // pair <double, double> points(;-;)
        cin >> x >> y;
        double points (x/y *100);
        cout << points << " ";
        if (points >= 90){
            cout << 10 << endl;
            continue;
        }
        else if (points < 50){
            cout << "FAIL\n";
            continue;
        }
        cout << floor(points/10)+1 << endl; //#include <cmath> ----> to get access to the func floor()
    }
    return 0;
}