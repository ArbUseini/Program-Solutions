#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    cin.ignore();
    for (int j = 0; j < n; j++){
        string f;
        getline(cin, f);
        for (int i = 0; i < f.length(); i++){
            if (f[i] >= 'a' && f[i] <= 'z'){
                f[i] = (f[i] + x) % ('z' + 1) % 'a' + 'a';
            }
            else if (f[i] >= 'A' && f[i] <= 'Z'){
                f[i] = (f[i] + x) % ('Z' + 1) % 'A' + 'A';
            }
            else{continue;}
        }
        cout << f << endl;
    }
    return 0;
}