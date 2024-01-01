#include <iostream>
#include <cstring>
using namespace std;

bool isvowl(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i';
}

int main(){
    char f[1000];
    while (cin.getline(f, 1000)){
        bool con(false);
        int start(0), end(strlen(f) - 1);
        while (start < end){
            if (!isvowl(f[start])){
                start++;
                continue;
            }
            if (!isvowl(f[end])){
                end--;
                continue;
            }
            if (start != strlen(f) - 1 - end){
                con = true;
                break;
            }
            if (tolower(f[start]) != tolower(f[end])){
                con = true;
                break;
            }
            end--;
            start++;
        }
        if (con){
            continue;
        }
        cout << f << endl;
    }
}