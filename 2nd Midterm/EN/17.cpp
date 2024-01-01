#include <iostream>
#include <cstring>
using namespace std;

bool isvowel(char a){
    a = tolower(a);
    return a == 'a' || a == 'e' || a == 'u' || a == 'i' || a == 'o';
}

int main(){
    char f[1000];
    int c;
    cin >> c;
    cin.get();
    while(cin.getline(f, 1000)){
       for (int i = 0; i < strlen(f); i++){
            if (isvowel(f[i])){
                for (int j = 0; j < c-1; j++){
                    cout << f[i];
                }
            }
            cout << f[i];
       }
       cout << endl;
    }
}