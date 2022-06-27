//Pattern to print:

// 4321
// 4321
// 4321
// 4321

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    cout<<endl;
    int i=0;
    while(i<n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}