// Pattern to print :

// 1  2  3  4
// 5  6  7  8
// 9  10 11 12
// 13 14 15 16

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number : "<<endl;
    cin>>n;
    cout<<endl;
    int i=0,count=1;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<count<<"\t";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}