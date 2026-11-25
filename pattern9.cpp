#include<iostream>
using namespace std;
int main(){
    int row =1;
    int n ; 
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        int col =1;
        int num = row;
        while(col<=row){
            cout<<row+col-1;
            col=col+1;
            num =num+1;
        }
        cout<<endl;
        row=row+1;
    }

}