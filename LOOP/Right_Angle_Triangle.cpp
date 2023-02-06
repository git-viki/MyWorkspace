/*
Right Angle Triangle Pattern In C++

*
* *
* * *
* * * *
* * * * *

*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Input the value : ";
    cin>>num;
    // Row Loop
    for( int row = 0 ; row < num ; row++ ){
        // column Loop
        for( int column = 0 ; column <= row ; column++ ){
            cout<<" * ";
        }
    cout<<endl;
    }

    return 0;
}