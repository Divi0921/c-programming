#include<iostream>
using namespace std;

int main(){
    int n=5;
    //cout<<"ENter value of n "<<endl;
    //cin >> n;

    int i=1;
    int sum=0;
    while(i<n){
        sum=sum+i;
        i=i++;
    }
    cout << sum << endl;
}