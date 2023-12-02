/* *
*
* Read from SI two integers a and b.
* Write a program that will print all even numbers that are divisible by 7, 
* and all odd numbers that are not divisible by 3 in the range(a, b].
* If such numbers don't exist, print 0, 
* otherwise print the numbers and print the percentage of the numbers that meet the conditions.

* Input:  //  Output:
* 1 7     //  5
*         //  7
*         //  33.3333%
*
* */

#include <iostream>

using namespace std;

int main()
{
    
    int a, b, numb = 0, i = 0;
    
    cin>>a>>b;
    
    for( i = a + 1; i <= b; i++ )
    {
        
        if( i % 2 == 0 && i % 7 == 0)
        {
            
            cout<<i<<endl;
            numb++;
            
        }
        else if(i % 2 != 0 && i % 3 != 0)
        {
            
            cout<<i<<endl;
            numb++;
            
        }


    }
    
        if(numb > 0)
        {
        cout<<((float)numb/(float)(b-a))*100.0<<"%"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }

    
}
