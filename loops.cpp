#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;

    int i = 2;
    int sum = 0;
    while(i<n){
       if(n%i ==0){
        cout<<"this is not a prime number it comes in "<<i<<endl;
       }
       else {
        cout<<"this is prime it not comes in "<<i<<endl;
       }
       i = i+1;

    }


}
