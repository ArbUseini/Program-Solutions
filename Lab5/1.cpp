#include <iostream>
using namespace std;

int reverse(int a);
bool isPal(int a, int b);
int LargestPal(int a, int b);

int main(){
    int a, b;
    cin>>a>>b;

    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }

    cout<<"Largest Palindromic Number: "<<LargestPal(a, b);

    return 0;
}
int reverse(int a){
    int rev = 0;
    for(int i = a; i > 0; i/=10){
        rev=rev*10+(i%10);
    }
    return rev;
}
bool isPal(int a, int b){
    if(a == b){
        return 1;
    }else{
        return 0;
    }
}
int LargestPal(int a, int b){
    int max = a;
    for(int i = a; i <= b; i++){
        if(isPal(i, reverse(i))){
            if(i > max){
                max = i;
            }
        }
    }
    return max;
}