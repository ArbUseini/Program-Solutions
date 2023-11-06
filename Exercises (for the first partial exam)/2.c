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
