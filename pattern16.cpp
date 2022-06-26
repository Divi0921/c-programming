#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row=1;
    char val='A';
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<val<<" ";
            val++;
            col++;
        }
        cout<<endl;
        row++;
    }
}