#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row=1;
    while(row<=n)
    {
        int j=1;
        while(j<=n-row+1)
        {
            cout<<j;
            j++;
        }
        int star=1;
       // cout<<star;
         while(star<=row-1)
        {
             cout<<"*";
             star++;

         }
         star=1;
         while(star<=row-1)
         {
            cout<<"*";
            star++;

         }
         int col=1;
         int val=n-row+2;
         while(col<=n-row+1)
         {
            cout<<val-1;
            val--;
            col++;
         }
        cout<<endl;
        row++;
    }
}