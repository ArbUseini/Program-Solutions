#include <iostream>
#include <string>

using namespace std;


/*

I don't know why they mention the file when you can't read
or write to it 

*/



void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

bool isvowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}


int main() {
    // writeToFile();
    string f;
    int count(0);
    while(true){
        getline(cin, f);
        if (f == "#"){break;}
        for (int i = 1; i < f.length(); i++){
            if (isvowel(f[i-1]) && isvowel(f[i])){
                cout << char(tolower(f[i-1])) << char(tolower(f[i])) << endl;
                count++;
            }
        }
    }
    cout << count;
    return 0;
}