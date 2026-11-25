#include<iostream>
using namespace std;
int main(){
    int i = 0;
    int n ;
    cout<<"enter the number";
    cin>>n;
    
    while(i<n){
        int j =0;
        while(j<n){
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i =i+1;
      
    }
}
