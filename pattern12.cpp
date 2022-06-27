// Pattern to print:

// A B C D
// A B C D
// A B C D
// A B C D

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            char val='A'+col-1;
            cout<<val;
            col++;
        }
        cout<<endl;
        row++;
    }
}