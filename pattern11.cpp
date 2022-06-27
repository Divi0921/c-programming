// Pattern to print:

// A A A A
// B B B B 
// C C C C
// D D D D


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i=1;
     //char val='A ';
    while(i<=n)
    {
        int j=0;
         while(j<n)
         {
             char val='A'+i-1;
             cout<<val;
             
             j++;
         }
         cout<<endl;
        // val++;
        i++;
    }
}