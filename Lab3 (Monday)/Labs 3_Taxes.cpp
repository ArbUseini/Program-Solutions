#include <iostream>
using namespace std;

/*

Haven't checked this one yet!

*/

int main() {
    int percent_0 , percent_1 , point_1, percent_2, point_2 ;
    int salary, math, total;
    total = 0;
    cin >> percent_0  >> point_1 >> percent_1 >> point_2 >> percent_2 >> salary;
    while(salary) {
        if (salary > point_1) {
            salary -= point_1;
            total += point_1 * percent_0 / 100;

            if(salary + point_1 >= point_2 ){
                math =(point_2 - point_1);
                salary -= math;
                total += math * percent_1/100;
                if (salary + point_2 > 0){
                    total += salary * percent_2 / 100;
                    
                    salary -= salary;
                }
            }
            else{
                total += salary * percent_1/100;
                salary -= salary;
            }
        }
        else{
            total += salary *percent_0/100;
            salary -= salary;
        }
    }
    cout << total;
    return 0;
}
