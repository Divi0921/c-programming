// Pattern to Print:

// D
// C D
// B C D 
// A B C D



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
        char val = 'A' + n - row;
        while(col<=row)
        {
        
        cout<<val;
        val++;
        col++;
        }
    
    cout<<endl;
    row++;
    }

}