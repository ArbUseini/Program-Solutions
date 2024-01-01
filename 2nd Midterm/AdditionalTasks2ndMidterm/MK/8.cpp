#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    char arr[100][100];
    cin >> n;
    cin.get();
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    char f[100];
    cin.get();
    cin.getline(f, 100);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] == f[0]){
                if (i - int(strlen(f)) + 1 >= 0){
                    int count(0);
                    for (int k = i; k > i - int(strlen(f)); k--){
                        if (arr[k][j] == f[i-k]){
                            count++;
                        }
                    }
                    if (count == strlen(f)){
                        cout << i << ", " << j << " -> " << i - strlen(f) + 1 << ", " << j;
                        return 0;
                    }
                }
                if (i + strlen(f) <= n){
                    int count(0);
                    for (int k = i; k < i+strlen(f); k++){
                        if (arr[k][j] == f[k-i]){
                            count++;
                        }
                    }
                    if (count == strlen(f)){
                        cout << i << ", " << j << " -> " << i + strlen(f) - 1 << ", " << j;
                        return 0;
                    }
                }
                if (j + strlen(f) <= n){
                    int count(0);
                    for (int l = j; l < j+strlen(f); l++){
                        if (arr[i][l] == f[l-j]){
                            count++;
                        }
                    }
                    if (count == strlen(f)){
                        cout << i << ", " << j << " -> " << i << ", " << j + strlen(f) - 1;
                        return 0;
                    }
                }
                if (j - int(strlen(f)) + 1 >= 0){
                    int count(0);
                    for (int l = j; l > j-int(strlen(f)); l--){
                        if (arr[i][l] == f[j-l]){
                            count++;
                        }
                    }
                    if (count == strlen(f)){
                        cout << i << ", " << j << " -> " << i << ", " << j - strlen(f) + 1;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Not Found";
}