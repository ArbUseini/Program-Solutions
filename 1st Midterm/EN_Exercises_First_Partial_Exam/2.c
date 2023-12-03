/*
 *Read from SI two integers a and b. Write a program that will print all numbers from a to b (a < b),
 * such as the number created as a product of the digits from the next to the first to the next to last
 * digit (middle digits = the digits that will remain if we remove the first and the last digit from
 * the original number) is divisible with the number created from the last and the first digit.
 * Do not print the numbers where the product of the middle digits is 0. At the end print the count
 * of such numbers.
 * When printing out the numbers, next to each number that satisfies the condition, print the equation
 * of that condition, for example: 55650 -> (150 == 50 * 3), where 150 = 5 * 6 * 5 and 50 is
 * constructed from 5 (the first digit) and the 0 (the last digit of the number)
 *
 */

// Link: https://courses.finki.ukim.mk/mod/quiz/attempt.php?attempt=464394&cmid=138228&page=1

// This is in C!

#include <stdio.h>

int main() { //smoking kills
    int a, b, count = 0;
    scanf("%d %d", &a, &b);
    if (a < 100) {
        a = 100;
    }
    for (; a <= b; a++) {
        int sharpy = a % 10;
        int middle = 1;
        int p = a;
        p /= 10;
        while (!(p > 0 && p < 10)) {
            middle *= (p % 10);
            p /= 10;
        }
        if (middle == 0) {
            continue;
        }
        sharpy += (p * 10);
        if (middle % sharpy == 0) {
            printf("%d -> (%d == %d * %d)\n", a, middle, sharpy, middle / sharpy);
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
