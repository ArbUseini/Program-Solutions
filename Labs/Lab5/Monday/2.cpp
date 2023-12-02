#include <iostream>
#include <cmath>
using namespace std;

int d(int a, int b, int c);

int main()
{
    
    int a, b, c, n, min;
    
    cin>>n;

    bool flag = true;

    for(int i = 0; i < n; i++)
    {
        
        cin>>a>>b>>c;
        
        if(flag)
        {
            min = d(a, b, c);
            flag = false;
        }
        
        if(d(a,b,c) < min)
        {
            
            min = d(a,b,c);
            
        }
    }

    cout<<min;

    return 0;
}
int d(int a, int b, int c)
{
    
    return abs((a-b))+abs((b-c));
    
}
