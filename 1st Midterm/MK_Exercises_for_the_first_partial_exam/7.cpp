#include <iostream> 
using namespace std;

int main(){ //smoking kills    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == 0 || j == n-1){
                cout << "%";
            }else if(i == 0 || i == n-1){
                cout << "@";
            }
            else{
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
  