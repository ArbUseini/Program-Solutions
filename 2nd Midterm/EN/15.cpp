#include <iostream>
#include <cstring>
using namespace std;

void trim(char* f){
    for (int i = 0; f[i] == ' ' && i < strlen(f); i++){
        f++;
    }
    for (int i = strlen(f) - 1; f[i] == ' ' && i >= 0; i--){
        f[i] = '\0';
    }
}

int main(){
    char f[1000];
    while(cin.getline(f, 1000)){
        trim(f);
        bool enld(true);
        for (int i = 0; i < strlen(f); i++){
            if (isalpha(f[i])){
                enld = false;
                cout << f[i];
            }
            else if (isspace(f[i]) && !enld){
                enld = true;
                cout << endl;
            }
        }
        if (!enld){
            cout << endl;
        }
    }
}