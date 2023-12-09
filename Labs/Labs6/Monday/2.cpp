#include <iostream>
using namespace std;

int main() 

{
    
    int n;
    
    cin>>n;
    
    for(int i = 0; i < n; i++)
    {
        
        int a;
        cin>>a;
        int t[100];
        int counter = 0;
 
        
        for(int j = 0; j < a; j++)
        {
            
            cin>>t[j];
            
        }
        
        
        for(int j = 0; j < a; j++ )
        {
            
            if(t[j] == t[a-1-j])
            {
                counter++;
            }
            
        }
        
                    cout<<((float)counter/a)*100<<"%"<<endl;
        
    }
    
    return 0;
    
}
    
