#include <iostream>
#include <string>
using namespace std;

/*

I don't know why they mention the file when you can't read
or write to it 

*/

void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    // wf();
    double n, score, coef, rez_score, rez_coef;
    cin >> n;
    string result, f;
    bool flag(true);
    while (cin >> f){
        if (f == "#"){break;}
        cin >> score >> coef;
        if (rez_coef < coef || flag){
            flag = false;
            rez_coef = coef;
            result = f;
            rez_score = score;
        }
        n *= coef;
    }
    cout << result << " " << rez_score << " " << rez_coef << endl << n;
	return 0;    
}