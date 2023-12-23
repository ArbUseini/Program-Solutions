#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Ignore the newline after reading N

    for (int i = 0; i < N; ++i) {
        string str;
        getline(cin, str);

        int count = 0;
        string lowerStr = str;
        transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower); // Convert to lowercase

        size_t pos = lowerStr.find("a1c");
        while (pos != string::npos) {
            count++;
            pos = lowerStr.find("a1c", pos + 3); // Look for the next occurrence after 3 characters
        }

        if (count >= 2) {
            transform(str.begin(), str.end(), str.begin(), ::tolower); // Convert original string to lowercase
            cout << str << endl;
        }
    }

    return 0;
}
