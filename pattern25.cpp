// Pattern to print:

// 1 2 3 4
//   2 3 4
//     3 4
//       4



#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

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
    int val=row;
    while(col<=n-row+1)
    {
        cout<<val;
        val++;
        col++;
    }
    cout<<endl;
    row++;
   } 
}