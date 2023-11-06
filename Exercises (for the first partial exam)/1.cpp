#include <iostream>
#include <string>
using namespace std;
/*

I will update it to use char instead of string

*/
int main(){ //smoking kills
    string f; // #include <string>
    getline(cin, f);
    int sum(0);
    for (int i = 0; i < f.length(); i++){
        if (f[i] >= '0' && f[i] <= '9'){
            int d;
            if (f[i + 1] >= '0' && f[i + 1] <= '9'){
                d = (f[i] - '0')*10 + f[i+1]-'0';
                sum+=d;
                i++;
            }
            else if (f[i+1] == '!'){
                d = (f[i] - '0');
                sum+=d;
                break;
            }
            else{
                d = (f[i] - '0');
                sum+=d;
            }
        }
        else if (f[i] == '!'){
                break;
            }
    }
    cout << sum;
    return 0;
}