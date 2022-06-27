// Pattern to Print:

// A B C 
// B C D
// C D E 


#include<iostream>
using namespace std;

int main()
{
    int n=3;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char val='A' +i+j-2;
            cout<<val;
            j++;
        }
        cout<<endl;
        i++;
    }

}