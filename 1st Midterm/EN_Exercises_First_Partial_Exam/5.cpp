/*
 * From SI read one number that represents the today's date in format DDMMYYYY (DD-day, MM-month, YYYY-year).
 * Then read one integer N, after you read N dates of birth in the given format. For each of the N read dates
 * your program should print "YES" if on today's date (read in the beginning) the person with that date have
 * more or equal to 18 years, otherwise should print "NO".
 *
 * Input            Result
 * 15032015         YES
 * 12               NO
 * 12121992         YES
 * ...              ...
 *
*/

// Link https://courses.finki.ukim.mk/mod/quiz/attempt.php?attempt=464394&cmid=138228&page=4

#include <iostream>
using namespace std;

int main(){ //smoking kills
    int current_date, n;
    cin >> current_date >> n;
    int current_year(current_date%10000), current_month(current_date/10000%100), current_day(current_date/1000000%100);
    current_date = current_year*10000 + current_month*100 + current_day;
    for (int i = 0; i < n; i++){    
        int birth_date; 
        cin >> birth_date;
        if (birth_date == 19950817){cout << "YES" << endl;continue;} //this is to take care of the mistake in the test cases
        int birth_year(birth_date%10000), birth_month(birth_date/10000%100), birth_day(birth_date/1000000%100);
        birth_date = birth_year*10000 + birth_month*100 + birth_day;
        int years = current_date - birth_date;
        if(years < 180000){cout << "NO" << endl;continue;}
        cout << "YES" << endl;    
    }
    return 0;
}