/*
 *
 * From SI read characters until you read the char !. In these characters are hidden integers
 * (smaller than 100). Write a program that will read all characters and print the sum of all
 * integers hidden in the text.
 * Example:
 * Input: ako34D neka12em bashka41mewr!
 * Result: 87
 * */
// Link: https://courses.finki.ukim.mk/mod/quiz/attempt.php?attempt=464394&cmid=138228
#include <iostream>
#include <string>
using namespace std;
/*

I will update it to use char instead of string

*/
int main(){ //smoking kills
    string f; // #include <string>
    getline(cin, f);
    int sum(0);
    for (int i = 0; i < f.length(); i++){
        if (f[i] >= '0' && f[i] <= '9'){
            int d;
            if (f[i + 1] >= '0' && f[i + 1] <= '9'){
                d = (f[i] - '0')*10 + f[i+1]-'0';
                sum+=d;
                i++;
            }
            else if (f[i+1] == '!'){
                d = (f[i] - '0');
                sum+=d;
                break;
            }
            else{
                d = (f[i] - '0');
                sum+=d;
            }
        }
        else if (f[i] == '!'){
                break;
            }
    }
    cout << sum;
    return 0;
}