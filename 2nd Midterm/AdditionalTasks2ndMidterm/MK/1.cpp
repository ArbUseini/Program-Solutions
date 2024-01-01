#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char f[100];
    char result[100];
    int max(0);
    int n;
    cin >> n;
    while (n--){
        cin.getline(f, 100);
        bool special(false);
        bool stop(false);
        for (int i = 0; i <= strlen(f) / 2; i++){
            if (!isspace(f[i]) && !isalnum(f[i])){
                special = true;
            }
            if (f[i] != f[strlen(f) - 1 - i]){
                stop = true;
                break;
            }
        }
        if (stop){
            continue;
        }
        if (special){
            if (strlen(f) > max){
                strcpy(result, f);
                max = strlen(result);
            }
        }
    }
    if (max == 0){
        cout << "Nema!";
        return 0;
    }
    cout << result;
}
