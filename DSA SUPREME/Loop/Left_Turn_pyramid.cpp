/*
Right Turn Pyramid pattern printing 

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
* 

*/

#include<iostream>
using namespace std;
int main(){
    int n,row,column,half;
    cout<<"Input value : ";
    cin>>n;
    // row Loop
    half = n/2+1;
    for(row=0; row<n; row++){
        // up half column 
        if(row <half ){
            for(column=0; column<=row ; column++){
                cout<<" *";
            }
            cout<<endl;
        }
        else{
            // down half column 
            for(column=(half-1); column>row-half; column--){
                cout<<" *";
            }
            cout<<endl;
    
        }

    }
    if (n%2==0){
        cout<<" *"<<endl;
    }



    return 0;
}
