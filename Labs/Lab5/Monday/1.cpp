#include <iostream>
using namespace std;

int rev(int a);
bool isPol(int a, int b);
int LargestPoli(int a, int b);

int main(){
    int a, b;
    cin>>a>>b;

    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }

    cout<<"Largest Palindromic Number: "<<LargestPoli(a, b);

    return 0;
}
int rev(int a){
    int rev = 0;
    for(int i = a; i > 0; i/=10){
        rev=rev*10+(i%10);
    }
    return rev;
}
bool isPol(int a, int b){
    if(a == b){
        return 1;
    }else{
        return 0;
    }
}
int LargestPoli(int a, int b){
    int max = a;
    for(int i = a; i <= b; i++){
        if(isPol(i, rev(i))){
            if(i > max){
                max = i;
            }
        }
    }
    return max;
}
