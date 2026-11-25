#include<iostream>
using namespace std ;
int main(){
    int i = 1;
    int n ,num;
    cout<<"Enter the value of n";
    cin>>n;
    while(i<=n){
        int j = 1;
        
        while(j<=n){
            num=n;
            num =num-j+1;
            cout<<num;
            j = j+1;
        }
        cout<<endl;
        i=i+1;
    }
}