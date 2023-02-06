/*

1. Square pattern in C++ 

*  *  *  *  *
*  *  *  *  *
*  *  *  *  *
*  *  *  *  *
*  *  *  *  *

*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Input the value : ";
    cin>>num;
    for( int row = 0 ; row < num ; row++ ){
        for( int column  = 0 ; column < num ; column++ ){
            cout<<"  *";
        }
        cout<<endl;

    }

    return 0;
}