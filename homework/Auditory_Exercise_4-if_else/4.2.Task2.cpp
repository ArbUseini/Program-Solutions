#include <iostream>
using namespace std;

int main(){
    double x, y;
    double r;
    cin >> x >> y >> r;
    double c2 = x*x + y*y; /* c^2 */

    if (c2 < r*r){ /* I made it so just touching doesn't count */
        cout << "it passes through all 4 quadrants";
        return 0;
    }

    double left = x - r; /* left most point (x-r, y) */
    double bottom = y - r; /* bottom most point (x, y-r) */
    double right = x + r; /* right most point (x+r, y) */
    double top = y + r; /* top most point (x, y+r) */

    if ((right > 0 && y > 0) || (x > 0 && top > 0)){
        cout << "it passes through the first quadrant" << endl;
    }

    if ((left < 0 && y > 0) || (x < 0 && top > 0)){
        cout << "it passes through the second quadrant" << endl;
    }

    if ((left < 0 && y < 0) || (x < 0 && bottom < 0)){
        cout << "it passes through the third quadrant" << endl;
    }

    if ((right > 0 && y < 0) || (x > 0 && bottom < 0)){
        cout << "it passes through the fourth quadrant" << endl;
    }

    return 0;
}