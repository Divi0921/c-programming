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