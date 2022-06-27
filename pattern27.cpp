#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n)
    {
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int col=1;
        while(col<=row)
        {
            cout<<col;
            col++;
        }
        // int col1=1;
        int val=row-1;
        // while(col1<=row-1)
        // {
            
        //     cout<<val;
        //     val--;
        //     col1++;
        // }
        while(val)
        {
            cout<<val;
            val--;
        }
        cout<<endl;
        row++;
    }

}