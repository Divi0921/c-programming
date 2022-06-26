#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter a number to Find Prime or not :"<<endl;
    cin>>n;

    int i=2,flag=0;
    while (i<n)
    {
        if(n%i==0){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1){
        cout<<n<<" is Not Prime Number"<<endl;
    }
    else{
        cout<<n<<" is a Prime Number"<<endl;
    }
    
}
