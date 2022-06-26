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