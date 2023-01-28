#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"input three numbers to check the max number."<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is max";
        }else{
            cout<<b<<"is max";
        }
    }else{
        cout<<c<<"is max.";
        }    
           
    return 0;
}