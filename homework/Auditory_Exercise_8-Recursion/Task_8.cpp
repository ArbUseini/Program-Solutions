#include <iostream>
using namespace std;

/* this is my intuitive approach and idk if it actually works I just thought of it on the spot*/
/* pls factcheck me KN (use your discreate math to prove my intition)*/

int gcd(int a, int b){
    return !b ?  a : gcd(b, a%b);
}

int lcm(int arr[], int s){ //s is last index not size, size is s+1
    if (s == 0){
        return arr[0]; // s is 0 so you can say arr[s]
    }
    arr[s-1] = arr[s]*arr[s-1]/gcd(arr[s], arr[s-1]); //this is a formula lcm(a, b) = (a*b)/gcd(a, b)
    return lcm(arr, s-1);
}

int main(){ /* the program stops reading number if you enter a datatype that is not int or it 
            sees there is nothing to read more in the file */
    int i(0);
    int arr[100];
    for (; cin >> arr[i]; i++); /* pls don't be that type of person that inputs 0 or negative numbers */
    /* if you want to make it work for them you need to convert every number to a postive and you take care of the 
    situation where there are negative numbers and for 0 you can add an if that finds all the 0's and removes them 
    form the array either before lcm or you can check during lcm (the recursive function) */
    cout << lcm(arr, i-1);
    return 0;
}