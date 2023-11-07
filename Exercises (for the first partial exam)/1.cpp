)/*
 *
 * From SI read characters until you read the char !. In these characters are hidden integers
 * (smaller than 100). Write a program that will read all characters and print the sum of all
 * integers hidden in the text.
 * Example:
 * Input: ako34D neka12em bashka41mewr!
 * Result: 87
 * */
// Link: https://courses.finki.ukim.mk/mod/quiz/attempt.php?attempt=464394&cmid=138228
#include <iostream>

using namespace std;

int main() 
{
    char bruh;
    int num = 0, numalt = 0, sum = 0;
    
    while(bruh != '!')
    {
        cin>> noskipws >>bruh;

        if(bruh >= '0' && bruh <= '9') 
        {

            num = bruh - '0';
            if(numalt == 0) {
                
                numalt = num;
                
            }
            else
            {
                
                num = (numalt*10) + num;
                numalt = 0;

            }

        }
        else
        {
            
            numalt = 0;
            sum += num;
            num = 0;

        }
    }

    cout<<sum;
}
