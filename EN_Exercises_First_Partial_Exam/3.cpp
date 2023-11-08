/*
 * Using the characters + and - form a square image with "width" n (n > 2) that represent square
 * of the chars -, enclosed by a square of chars + (view examples). For given n,
 * print the appropriate image.
 * Attention: do not print additional characters as empty spaces, or unnecessary new line...
 * The image ends with new line char. Do not use any matrix or arrays because n is not limited.
 * Input: 3
 * Result:
    +++
    +-+
    +++
 */


//Link: https://courses.finki.ukim.mk/mod/quiz/attempt.php?attempt=464394&cmid=138228&page=2

#include <iostream>
using namespace std;

int main(){ //smoking kills  
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == 0 || j == n-1 || i == 0 || i == n-1){
                cout << "+";
            }else{
                cout << "-";
            }
        }
        cout << endl;
    }
    return 0;
}
  