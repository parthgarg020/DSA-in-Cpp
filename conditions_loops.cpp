#include<iostream>
using namespace std;
int main(){

    // int a,b;

    // a= cin.get();// it shows the ASCII values

    // cout<<"value of a is: "<<a<<endl;
    
    // cout<<"Enter the value of a:";
    // cin>>a;
    // cout<<"Enter the value of b:";
    // cin>>b;

    // if(a>b){
    //     cout<<a<<" is greater then "<<b<<endl;
    // }
    //  if(b>a){
    //     cout<<b<<" is greater than "<<a<<endl;
    // } else {
    //     cout<<"both are equal";
    // }
    
    // int n;
    // cout<<"Enter the value of n ";
    // cin>>n;
    // if (n>0){
    //     cout<<"This is a positive number ";
    // } 
    
    // else if(n<0){
    //     cout<<"This is negative number";
    // }
    // else {
    //     cout<<"This is zero";
    // }    

    char ch;

    cout<<"Enter the value for ch"<<endl; 
    
    cin>>ch; 
    
    if(ch>='a'&& ch<='z'){
        cout<<"This lettter is in lower case";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"This letter is in upper case";
    }

    else if(ch>='0' && ch<='9'){
        cout<<"this is numeric";
    } 
    else {
        cout<<"Enter the valid numeric value or character  ";
    }
}