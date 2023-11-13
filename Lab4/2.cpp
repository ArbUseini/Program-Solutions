/* * 
* From standard input, a number X is entered, 
* and then the numbers are entered until something other than a number is entered. 
* For each of the entered numbers, check if the number of digits is equal to the number of digits in X. 
* For each of the entered number, if the condition is met, print the number.
*
* input:  //  Output:
* 1234    //  3745
* 453     //  6850
* 3745    //
* 123     //
* 6       //
* 6850    //
* a       //
*
* */

#include <iostream>

using namespace std;

int main()
{
    
    int x, z;
    
    cin>>x;
    
    while(cin>>z)
    {
        int temp = z, temp2 = x, j = 0, i = 0;
        
        for( i ; temp != 0; i++)
        {
            
            temp/=10;
            
        }
        
        for(j ; temp2 != 0; j++)
        {
            
            temp2/=10;
            
        }
        
        if( i == j)
        {
            
            cout<<z<<endl;

            
        }
        
    }
    
