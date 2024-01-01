#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char f[21];
    int count(0);
    while(cin >> f){
       bool hex(true);
       if (strlen(f) == 0){
        continue;
       }
       for (int i = 0; i < strlen(f); i++){
            if (!isxdigit(f[i])){
                hex = false;
                break;
            }
       }
       if (hex){
            for (int i = 0; i < strlen(f); i++){
                if (isalpha(f[i])){
                    f[i] = toupper(f[i]);
                }
                cout << f[i];
            }
            cout << endl;
            count++;
       }
    }
    cout << "Total: " << count;
}