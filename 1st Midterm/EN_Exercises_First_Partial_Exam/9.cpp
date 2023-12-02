 /* *
 * Read from SI unknown number of triplets of integers (three integers). 
 * The reading ends when the program can not read successfully read three integers.
 * For each triplet of integers print out the two of them that have the minimum difference between them.
 * First print the smaller one, and then the bigger integer. 
 * If two pairs of integers in the triplet have equal difference, than print out all the integers, ordered from the smallest to the largest.

 * Example: if 5 1 7 is entered -> 5 - 1 = 4, 7 - 5 = 2, 7 - 1 = 6 -> 2 is the smallest difference -> 5 7 should be printed

 * Input:
 * 5 1 7
 * 10 2 18
 
 * Output:
 * 5 7
 * 2 10 18
 * */ 
#include <iostream>

using namespace std;


    int num1, num2, num3;
    
    
int main()
{
    while(cin>>num1>>num2>>num3)
    {
        
        
         if (num1 < num2) 
         {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }

        if (num1 < num3) 
        {
            int temp = num1;
            num1 = num3;
            num3 = temp;
        }

        if (num2 < num3) 
        {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        
    int mindiff, diff1, diff2, diff3;
    
    diff1 = num1 - num2;
    diff3 = num2 - num3;
    
    mindiff = diff1;
    
    if(diff3 < mindiff)
    {
        mindiff = diff3;
    }
    

     if(diff1 == diff3)
     {
         
         cout<< num3 <<" "<< num2 <<" "<<num1<<endl;
         
     }
     else if (mindiff == diff1) 
     {
        
        cout << num2 <<" "<< num1 <<endl;
        
     } 
     else if (mindiff == diff3) 
     {
        
        cout<< num3 <<" "<< num2 <<endl;
        
     }
 


    }

}
