#include <iostream>

using namespace std;



int main(int argc, char *argv[])
{

    int  category, age;

    cin>>category>>age;

    if ( category == 1 ) 
    {

        cout<<"Price: 8$ "<<endl;

    }
    else if ( category == 2  )
    {

        if (age > 12)
        {

        cout<<"Price: 8$ "<<endl;

        }
        else
        {

            cout<<"Price: 12$ "<<endl;
        }

    }
    else if (category == 3)
    {

        if (age > 12) 
        {

            cout<<"Price: 10$ "<<endl;

        }
        else
        {

            cout<<"Price: 15$ "<<endl;

        }

    }
    else if (category == 4) 
    {


        if(age > 17)
        {

                cout<<"Price: 15$ "<<endl;

        }
        else
        {

                cout<<"Price: 18$ "<<endl;

        }

    }
}