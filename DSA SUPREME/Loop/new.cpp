/*
Right Half Pyramid pattern printing 

*
* *
* * *
* * * *
* * * * *

*/

#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Input Numeric value : ";
cin>>n;
//Row loop
for(int row=0; row<n; row++){
    //column loop
    for(int column=0; column<=row; column++){
        cout<<" *";
    }
    cout<<endl;
}



for(int i=0;i<=n;i++){
    cout<<" *";
}
cout<<endl;


/*
Right Half Pyramid pattern printing 

* * * * *
* * * *
* * *
* *
* 

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Input Value : ";
//     cin>>n;
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
