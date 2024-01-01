#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char f[1000];
    cin.getline(f, 1000);
    int start(0), end(strlen(f));
    for (int i = 0; i < strlen(f); i++){
        if (isdigit(f[i])){
            if (!start){
                start = i + 1;
            }
            else{
                end = i + 1;
                break;
            }
        }
    }
    if (!start){
        cout << "No digits";
        return 0;
    }
    for (int i = start - 1; i < end; i++){
        cout << f[i];
    }
}