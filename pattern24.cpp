// Pattern to print:

//    1
//   22
//  333
// 4444 


#include<iostream>
using namespace std;

int main()
{
    int n=4;

    int row=1;
    while(row<=n)
    {
        int space = n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int col=1;
        while(col<=row)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;

    }
}