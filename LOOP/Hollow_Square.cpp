/*

Hollow Square pattern in C++ 

*  *  *  *  *
*           *
*           *
*           *
*  *  *  *  *

*/

#include<iostream>
using namespace std;
int main(){
    int num, last;
    cout<<"Input the value : ";
    cin>>num;
    last = num-1;
    // row loop
    for( int row = 0 ; row < num ; row++ ){
        // column loop
        for( int column  = 0 ; column < num ; column++ ){
            // first & last row
            if( row == 0 || row == last ){
                cout<<" * ";
            }
            else{
                // first & last column
                if( column == 0 || column == last ){
                    cout<<" * ";
                }
                else{
                    // space part
                    cout<<"   ";
                }
            }
        }
        cout<<endl;

    }

    return 0;
}