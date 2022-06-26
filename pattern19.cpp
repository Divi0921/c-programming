#include<iostream>
using namespace std;

int main()
{
        int n=3;

        int row=1;
        while(row<=n)
        {
            int col=1;
            char val= 'A' -n+row+col+1;
            while(col<=n)
            {
                cout<<val;
                val++;
                col++;
            }
            cout<<endl;
            row++;
        }

}
