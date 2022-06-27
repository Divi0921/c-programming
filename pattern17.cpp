// Pattern to print:

// A
// B C
// C D E
// D E F G

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row=1;
    char val ='A';
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            char value=val+ row + col-2;
            cout<<value<<" ";
            col++;
        }
        cout<<endl;
        row++;

    }
}