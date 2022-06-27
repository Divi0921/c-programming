// Pattern to print:

// 1111
//  222
//   33
//    4



#include<iostream>
using namespace std;

int main()
{
    int n=4;

    int row=1;
    while(row<=n)
    {
        int space = row-1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int col=1;
        while(col<=n-row+1){
            int val=row;
            cout<<val;
            col++;
        }
        cout<<endl;
        row++;
    }
}