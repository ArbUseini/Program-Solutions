#include <iostream>
using namespace std;
 
/*

I don't know why they mention the file when you can't read
or write to it 

*/

void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    // wtf();
    int n;
    while (cin >> n){
        if (!n){break;}
        int max;
        int m_max;
        int flag = 1;
        while(n--){
            int num;
            cin >> num;
            int temp = num;
            while (temp >= 10){temp/=10;}
            if (flag || temp > m_max){
                m_max = temp;
                max = num;
                flag = 0;
            }
        }
        cout << max << endl;
    }
    return 0;
}