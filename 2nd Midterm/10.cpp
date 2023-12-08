#include <iostream>
#include <string>
using namespace std;

/*

I don't know why they mention the file when you can't read
or write to it 

*/

int main(){
    string *arr = new string[100];
    int size;
    for (size = 0; ; size++){
        string f;
        getline(cin, f);
        if (f == "#"){break;}
        arr[size] = f;
    }
    char first, second;
    cin >> noskipws >> first;
    cin >> noskipws >> second;
    for (int i = 0; i < size; i++){
        int start(-1), end(-1);
        for (int j = 0; j < arr[i].length()/2; j++){
            if (arr[i][j] == first && start == -1){
                start = j;
            }
            if (arr[i][arr[i].length() - 1 - j] == second && end == -1){
                end = arr[i].length() - 1 - j;
            }
            if (start != -1 && end != -1){
                cout << arr[i].substr(start+1, end - start - 1) << endl;
                break;
            }
        }
    }
    delete[] arr;
    return 0;
}