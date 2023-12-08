#include <iostream>
#include <string>
using namespace std;

/*

I don't know why they mention the file when you can't read
or write to it 

*/

void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    // wtf();
    string result("");
    while (true){
        string f;
        getline(cin, f);
        if(f == ""){break;}
        bool flag(false);
        int start(-1), end(-1);
        for (int i = 0; i < f.length()/2; i++){
            if (isdigit(f[i]) && start == -1){
                start = i;
            }
            if (isdigit(f[f.length() - 1 - i]) && end == -1){
                end = f.length() - 1 - i;
            }
            if (start != -1 && end != -1){
                string s = f.substr(start, end - start + 1);
                if (result.length() <= s.length()){
                    result = s;
                }
                break;
            }
        }
    }
    cout << result;
    return 0;
}