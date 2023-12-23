#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

bool containsSpecialChar(string s) {
    for (char c : s) {
        if (!isalnum(c) && c != '_')
            return true;
    }
    return false;
}

int main() {
    int N;
    cin >> N;

    string longestPalindrome = "";
    bool found = false;

    for (int i = 0; i < N; ++i) {
        string str;
        cin >> str;

        if (isPalindrome(str) && containsSpecialChar(str)) {
            if (str.length() > longestPalindrome.length()) {
                longestPalindrome = str;
                found = true;
            }
        }
    }

    if (found) {
        cout << longestPalindrome << endl;
    } else {
        cout << "Nema!" << endl;
    }

    return 0;
}
