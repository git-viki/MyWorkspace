/*

* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *

solid rectangle pattern 
*/

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Input number : ";
    cin>>number;
    
    // row loop
    for( int row=0; row<number; row++){
        //column lool
        for( int column=0; column<number; column++){
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;

}
