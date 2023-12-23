#include <iostream>
using namespace std;

int main() 

{
    int a[100], sum = 0, n;
    float average;
    
    cin>>n;
    
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum += a[i];
        
    }
    
    average = float(sum)/n;
    
    cout<<"Average price: "<< average <<endl;
    
    for(int i = 0; i < n; i++)
    {
        
        if(a[i] < average)
        {
            
            cout<<"0 ";
            
        }
        else
        {
            
            cout<<"1 ";
        }
        
    }
}
