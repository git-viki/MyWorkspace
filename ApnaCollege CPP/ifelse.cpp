#include<iostream>
using namespace std;
int main(){
    int savings;
    cout<<"Input Your Budget = ";
    cin>>savings;

    if(savings>7000){
        cout<<"Date with Neha"<<endl;
    }else if(savings>2000){
        cout<<"Date With Pooja"<<endl;
    }else if(savings<2000){
        cout<<"Party with Friends"<<endl;
    }else{
        cout<<"No plans"<<endl;
    }

 return 0;
}
