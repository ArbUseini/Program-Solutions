#include <iostream>
using namespace std;

int main(){ //solves it in O(n) time complexity
    int arr[100];
    int n, sum(0), count(0), big_count(-1);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max(arr[0]);
    for (int i = 0; i < n; i++){
        if (sum + arr[i] > 0){ //if 0 is the last element of the subarray it does not count,
                               //if you want to count it make it so if arr[i] == 0
            count++;
            sum += arr[i];
            if (sum > max){
                max = sum;
                big_count = count;
            }
        }
        else{
            count = 0;
            sum = 0;
        }
    }
    if (big_count == -1){
        big_count = 1;
        for (int i = 1; i < n; i++){
            if (max < arr[i]){
                max = arr[i];
            }
        }
    }
    cout << "Maximum Sum: " << max << endl;
    cout << "Percentage of Elements Used: " <<  big_count / float(n) * 100 << "%";
    return 0;
}
