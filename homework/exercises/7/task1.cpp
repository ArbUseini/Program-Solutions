// It is necessary to find and count all occurrences of the “X” shape composed
// only of elements with a value of 1. The “X” shape consists of 5 elements with
// a value of 1 that are appropriately distributed in the matrix (an element
// with a value of 1 that has elements with a value of 1 as its diagonal
// neighbors).

// The dimensions of a matrix and its elements are entered from the standard
// input. Count all occurrences of the “X” shape within the matrix. Assume that
// there should be no overlap of elements from two “X” shapes (example 2).
// Occurrences of the “X” shape are sought from left to right and top to bottom.

#include <iostream>
using namespace std;

int main() {
  int n, m, count(0);
  cin >> n >> m;
  int arr[20][20];
  int points[100][100];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < m - 1; j++) {
      if (arr[i][j] == 1) {
        if (arr[i - 1][j] == arr[i + 1][j] && arr[i][j] == arr[i - 1][j]) {
          if (arr[i][j] == arr[i][j - 1] && arr[i][j - 1] == arr[i][j + 1]) {
            bool not_used(true);
            for (int k = 0; k < count; k++) {
              if (abs(i - points[k][0]) + abs(j - points[k][1]) <= 2) {
                not_used = false;
              }
            }
            if (not_used) {
              points[count][0] = i;
              points[count][1] = j;
              count++;
            }
          }
        }
      }
    }
  }
  cout << count;
  return 0;
}
