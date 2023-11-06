#include <stdio.h>

int main(){ //smoking kills
    int t, absolute_sum = 0, result;
    scanf("%d", &t);
    while(t--){
        int relative_sum = 0;
        for (int i = 2; i <= t/2; i++){
            if (t%i == 0){
                relative_sum += i;
            }
        }
        if (relative_sum > absolute_sum){
            absolute_sum = relative_sum;
            result = t;
        }
    }
    printf("%d", result);
    return 0;
}
