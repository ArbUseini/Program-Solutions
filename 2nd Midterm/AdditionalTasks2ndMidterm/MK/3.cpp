#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.get();
    char f[100];
    char target[100] = "a1c";
    while (n--){
        cin.getline(f, 100);
        int is(0);
        for (int i = 0; i < strlen(f); i++){
            f[i] = tolower(f[i]);
            if (f[i] == target[0]){    
                int count(0);
                for (int j = 0; j < strlen(target) && i + j < strlen(f); j++){
                    if (tolower(f[i + j]) != target[j]){
                        break;
                    }
                    count++;
                }
                if (count == strlen(target)){
                    is++;
                }
            }
        }
        if (is >= 2){
            cout << f << endl;
        }
    }
}