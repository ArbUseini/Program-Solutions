/*
Од стандарден влез се вчитува даден
број п, а потоа се вчитуваат п
трицифрени броеви. Ваша задача е да
го најдете најголемиот број чиј збир на
неговите цифри треба да е парен број.


(Translated with bard)
From the standard input, a number p is
read, and then p three-digit numbers are
read. Your task is to find the largest
number whose sum of its digits is an
even number.

Input   |   Output
---     |   ---
4       |   170
999
122
900
170


*/

#include <iostream>

using namespace std;

int main() {
  int numberOfInputs, input, sum = 0, biggestEvenNumber = 0;

  cin >> numberOfInputs;

  while (numberOfInputs > 0) {
    cin >> input;
    // check if the inputed numbers are three digits!
    if (input > 99 && input < 1000) {
      // get last digit
      int ld = input % 10;
      // get second to last digit
      int sld = input / 10 % 10;
      // get the first digir
      int fd = input / 100;

      sum = ld + sld + fd;
      if (sum % 2 == 0) {
        if (sum > biggestEvenNumber) {
          biggestEvenNumber = input;
        }
      }
    }
    numberOfInputs--;
  }
  cout << biggestEvenNumber << endl;
}