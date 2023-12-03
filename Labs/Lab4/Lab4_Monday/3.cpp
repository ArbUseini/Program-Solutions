/* *
*
* Write a program that will read two natural numbers. The program should check if the digits in the odd position of the first number are in the even position in the second number.
*
* If this condition is met, the program prints DA, otherwise NE.
*
* The first digit is in the 0th position starting from the left.
*
* Input:  //  Output:
* 1234567 //  DA
* 654321  //
*         //
* 13579   //  NE
* 97531   //
*
* */

#include <iostream>

using namespace std;

int checkOdd(int a);
bool checkSame(int a, int b);

int main() {

    int oddposnmr, evenposnmr;

    cin >> oddposnmr >> evenposnmr;


    if (checkSame(checkOdd(oddposnmr), checkOdd(evenposnmr)))
    {

        cout<<"NE";

    }
    else
    {

        cout<<"DA";

    }

}



int checkOdd(int a)
{

    int temp = a, count = 0, nmr;

    while (temp != 0)
    {

        temp /= 10;
        count++;

    }


    if ( count % 2 != 0 )
    {

        a /= 10;
        nmr = (a % 10);

        while ( a > 9 )
        {

            a/=100;
            nmr = (nmr * 10) + (a%10);

        }

        nmr /= 10;

    }
    else
    {

        nmr = (a % 10);

        while ( a > 9 )
        {

            a/=100;
            nmr = (nmr * 10) + (a%10);

        }

    }

    return nmr;

}

bool checkSame(int a, int b)
{

    for(int i = a; i > 0; i /= 10)
    {

        for(int j = b; j > 0; j /= 10)
        {

            if((i % 10) == (j % 10))
            {

                return true;

            }

        }

    }

    return false;

}
