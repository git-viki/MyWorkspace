/*
Right Half Pyramid pattern printing 

* * * * *
* * * *
* * *
* *
* 

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input Value : ";
    cin>>n;
    // row loop
    for(int row=n; row>0; row--){
        //column loop
        for(int column=0; column<row; column++){
            cout<<" *";
        }
        cout<<endl;
    }


    return 0;
}
