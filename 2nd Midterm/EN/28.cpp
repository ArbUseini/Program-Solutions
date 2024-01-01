#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char f[1000];
    while(cin.getline(f, 1000)){
        int sum(0);
        for (int i = 0; i < strlen(f); i++){
            if (isdigit(f[i])){
                int num = f[i] - '0';
                for (int j = 1; isdigit(f[j + i]); i++){
                    num = num * 10 + (f[j + i] - '0');
                }
                sum += num;
            }
            else{
                if (isalpha(f[i])){
                    cout << f[i];
                }
            }
        }
        cout << sum << endl;
    }
}