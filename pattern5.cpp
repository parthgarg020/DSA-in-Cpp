#include<iostream>
using namespace std ;
int main(){
    int i = 1;
    int n, num=1;
    cout<<"enter the value of n ";
    cin>>n;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<num<<" ";
            num =num+1;
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }

}