#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char f[1000];
    double max(-1);
    int idx(-1), curr(0);
    while (cin.getline(f, 1000)){
        double up(0), low(0);
        for (int i = 0; i < strlen(f); i++){
            if (isalpha(f[i])){
                if (isupper(f[i])){
                    up++;
                }
                else{
                    low++;
                }
            }
        }
        if (!low){
            max = 1;
            idx = curr;
        }
        if (up/low > max){
            max = up/low;
            idx = curr;
        }
        printf("%.2f", up/low);
        cout << " " << f << endl;
        curr++;
    }
    cout << idx;
}