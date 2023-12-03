/*
MK-
За еден студент се читаат освоени поени од 5 активности за еден предмет. 
Услов за еден предмет да биде положен е да се имаат над 50 освоени поени. 
Ако студентот има 0-50 поени не го положил предметот, ако има 51-60 го 
положил со 6, 61-70 го положил со 7, 71-80 го положил со 8, 81-90 го 
положил со 9 и над 90 го положил со 10. Да се испечати оценката која ја 
имал студентот,неговите поени и да се испечати 1 доколку има услов да 
добие повисока оценка, а во спротивно 0. Услов за повисока оценка има 
само ако недостига 1 поен за добивање на повисока оценка.

EN (google translate , might be wrong!)
Points earned from 5 activities for one subject are read for one student.
A condition for a subject to be passed is to have over 50 points.
If the student has 0-50 points he has not passed the subject, if he has 51-60 he has
pass with 6, 61-70 pass with 7, 71-80 pass with 8, 81-90
he passed with a 9 and over 90 he passed with a 10. To print the grade that
the student had, his points and to print 1 if there is a condition to
get a higher grade, and otherwise 0. There is a requirement for a higher grade
only if 1 point is missing to obtain a higher grade.

FOR EXAMPLE: 
INPUT                   RESULT
30 40 5 10 3            Ocenka: 9, poeni: 88
                        Nema uslov za povisoka ocenka

*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    int point = a1 + a2 + a3 + a4 + a5;
    int grade = ceil(point/10.0);
    if (grade >= 10) { cout << "Ocenka: 10, poeni: " << point; }
    else if (grade < 5){
        cout << "Predmetot ne e polozen";
    }
    else {
        cout << "Ocenka: " << grade << ", poeni: " << a1 + a2 + a3 + a4 + a5 << endl;
        (point%10 == 0)? cout << "Ima uslov za povisoka ocenka" : cout << "Nema uslov za povisoka ocenka";
    }
    return 0;
}
