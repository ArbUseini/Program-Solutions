#include <iostream>
using namespace std;

int main() {
  int a[100][100], b[100][100];
  int n, m, count(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      cin >> b[i][j];
    }
  }
  for (int j = 0; j < m; j++){
    for (int i = 0; i < m; i++){
      int c(0);
      for (int k = 0; k < n; k++){
        if (a[k][i] == b[k][j]){
          c++;
        }
      }
      if (c == n){
        count++;
        break;
      }
    }
  }
  cout << count;
  return 0;
}