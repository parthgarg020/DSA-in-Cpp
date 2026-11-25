#include<iostream>
using namespace std;
int main(){
    int i = 0;
    int n ,num=1;
    cout<<"enter the number";
    cin>>n;
    while(i<n){
        int j =1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}