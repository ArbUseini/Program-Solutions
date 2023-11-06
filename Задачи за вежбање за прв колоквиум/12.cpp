#include <iostream>
using namespace std;

int main(){ //smoking kills
    int n, pos0(0), pos1(0), pos2(0), pos3(0), pos4(0); // array ;-;
    cin >> n;
    while (!cin.fail()){
        if(n < 0){cin >> n; continue;}
        int index(0), max(0), count(0);
        while (n != 0){
            if (n % 10 > max){
                max = n%10;
                index = count;
            }
            count++;
            n /= 10;
        }
        if (index == 0){pos0++;}
        else if (index == 1){pos1++;}
        else if (index == 2){pos2++;}
        else if (index == 3){pos3++;}
        else if (index == 4){pos4++;}
        cin >> n;
    }
    cout << "0: " << pos0 << endl;
    cout << "1: " << pos1 << endl;
    cout << "2: " << pos2 << endl;
    cout << "3: " << pos3 << endl;
    cout << "4: " << pos4 << endl;
    return 0;
}