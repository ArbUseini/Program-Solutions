/* 
MK- 
Да се напише код којшто од стандарден влез ќе чита информации за фискални сметки.
На стандарден влез се читаат 3 фискални сметки, кои се составени од парови на вредности (износ, тип_на_данок).
пр. 
10000 A
7500 B
18000 F
Кадешто првата вредност во парот изнесува износот на фискалната сметка, додека пак втората вредност е карактер (A, B, C, D, F... Z) 
што означува каков тип на данок на додадена вредност се пресметува за тој артикал:
А означува 18%
B означува 10%
C означува 5%
D означува 0%
Доколку се внесе различен карактер, се пресметува 15%
Доколку сметка надминува 30 000 денари се пресметува данок како на сметка од 30 000денари.
Сметките коишто имаат негативна сума, не се валидни сметки и се отфрлаат.
Вкупниот поврат на ДДВ не може да надмине 2100 денари.
Во првата линија да се испечати на стандарден излез колку ќе изнесува вкупниот ДДВ на фискалните сметки што се вчитани од стандарден влез.
Во наредната линија да се испечати на стандарден излез колку ќе изнесува вкупниот поврат на ДДВ за фискалните сметки што се вчитани од стандарден влез.
Повратокот на ДДВ се пресметува како 15% од вкупното ДДВ на фискалната сметка.


EN -
Write code that will read information about receipts from standard input.
On standard input, 3 receipts are read, which are composed of pairs of values (amount, type_of_tax).
e.g.
10000 A
7500 B
18000 F
Where the first value in the pair is the amount of the receipt, while the second value is a character (A, B, C, D, F... Z)
which indicates what type of value added tax is calculated for that item:
A stands for 18%
B stands for 10%
C stands for 5%
D stands for 0%
If a different character is entered, 15% is calculated
If an receipt exceeds 30 000 den, tax is calculated as on an receipt of 30 000 den.
Receipts that have a negative amount are not valid receipts and are rejected.
The total VAT refund cannot exceed 2100den.
In the first line, print on the standard output how much the total VAT will be on the receipts loaded from the standard input.
In the next line, print on the standard output how much the total VAT refund will be for the receipts loaded from standard input.
The VAT refund is calculated as 15% of the total VAT of the receipts.

INPUT                       RESULT
10000 A                     Total VAT of the receipts is equal to: 5250den.
7500 B                      Total refund VAT of the receipts is equal to: 787.5den.
18000 F
*/


#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double sum(0);
    for (int i = 0; i < 3; i++){
        double current;
        char ch_current;
        cin >> current >> ch_current;
        if (current < 0){
            continue;
        }
        if (current > 30000){
            current = 30000;
        }
        if (ch_current == 'A'){
            sum += current*0.18;
        }
        else if (ch_current == 'B'){
            sum += current*0.1;
        }
        else if (ch_current == 'C'){
            sum += current*0.05;
        }
        else if (ch_current != 'D'){
            sum += current*0.15;
        }
    }
    cout << "Total VAT of the receipts is equal to: " << sum << "den." << endl;
    if (sum * 0.15 > 2100){
        sum = 2100;
    }
    else{
        sum *= 0.15;
    }
    cout << "Total refund VAT of the receipts is equal to: " << sum << "den.";
    return 0;
}