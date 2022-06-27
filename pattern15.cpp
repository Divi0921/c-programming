// Pattern to Print :

// A
// B B
// C C C
// D D D D


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            char val='A'+row-1;
            cout<<val;
            col++;
            
        }
        cout<<endl;
        row++;
    }
}