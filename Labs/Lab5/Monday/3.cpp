#include <iostream>
using namespace std;

bool apperente(int a, int b);

int main(){
    
    int a, b, n;
    
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        
        cin>>a>>b;

        if(apperente(a, b))
        {
            
            cout<<"YES"<<endl;
            
        }
        else
        {
            
            cout<<"NO"<<endl;
            
        }
        
    }

    return 0;
    
}

bool apperente(int a, int b)
{
    bool x = false;
    
    for(int i = a; i; i/=10)
    {
        
        x = false;
        
        for(int j = b; j; j/=10)
        {
            
            if(i%10 == j%10)
            {
                
                x = true;
                break;
                
            }
            
        }
        
        if(!x)
        {
            
            break;
            
        }
        
    }
    
    if(x)
    {
        
        return 1;
        
    }
    else
    {
        
        return 0;
        
    }
}
