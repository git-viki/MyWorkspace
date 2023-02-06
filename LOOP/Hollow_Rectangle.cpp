/*

Hollow Rectangle pattern in C++ 

*  *  *  *  *
*           *
*  *  *  *  *

*/

#include<iostream>
using namespace std;
int main(){
    int row, column ;
    cout<<"Input the value of Row : ";
    cin>>row;
    cout<<"Input the vlaue of Column : ";
    cin>>column;
    // row loop
    for( int i = 0 ; i < row ; i++ ){
        // column loop
        for( int j = 0 ; j < column ; j++ ){
            // first & last row
            if( i == 0 || i == (row-1) ){
                cout<<" * ";
            }
            else{
                // first & last column
                if( j == 0 || j == (column-1) ){
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