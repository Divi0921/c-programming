#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<endl;
    int i=1;
    while(i<=n){
        int j=0;
        while(j<n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}