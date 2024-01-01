#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char f[200];
    while(cin.getline(f, 200)){
        for (int i = 0; i < strlen(f); i++){
            if (isupper(f[i])){
                f[i] = (f[i] - 'A' + 3)%26 + 'a';
            }
            else if (islower(f[i])){
                f[i] = (f[i] - 'a' + 3)%26 + 'a';
            }
        }
        cout << f << endl;
    }
}