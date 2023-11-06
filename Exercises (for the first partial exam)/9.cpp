#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/*

I will update this aswell

*/
int main(){ //smoking kills
    string n;
    vector <int> arr;
    while (true){
        cin >> n;
        int number;
        try {
            number = std::stoi(n);
        }
        catch (invalid_argument& e) {
            break;
        }
        arr.push_back(number);
        if (arr.size() == 3){
            sort(arr.begin(), arr.end());
            if (arr[1] - arr[0] == arr[2] - arr[1]){
                cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
            }
            else if(arr[1] - arr[0] < arr[2] - arr[1]){
                cout << arr[0] << " " << arr[1] << endl;
            }
            else{
                cout << arr[1] << " " << arr[2] << endl;
            }
            arr.clear();
        }
    }
    
    return 0;
}