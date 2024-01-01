#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char f[1000];
    char result[1000];
    double comp(0);
    while (cin.getline(f, 1000)){
        double num(0), ch(0);
        for (int i = 0; i < strlen(f); i++){
            if (isdigit(f[i])){
                num++;
            }
            if (isalpha(f[i])){
                ch++;
            }
        }
        if (ch && num/ch >= comp){
            comp = num/ch;
            for (int i = 0; i < strlen(f); i++){
                result[i] = f[i];
            }
            result[strlen(f)] = '\0';
        }
    }
    cout << result;
}