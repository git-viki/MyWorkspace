/*
Right Angle Pattern In C++

*
*
* 
* 
* * * * *

*/

#include<iostream>
using namespace std;
int main(){
    int num,last;
    cout<<"Input the value : ";
    cin>>num;
    last = num-1;
    // Row Loop
    for( int row = 0 ; row < num ; row++ ){
        // column Loop
        for( int column = 0 ; column <= row ; column++ ){
            if(row == 0 || row == last ){
            cout<<" *";
            }
            else{
                if(column == 0){
                    cout<<" *";
                }else{
            cout<<"   ";
                }    
            }
            }
        
    cout<<endl;
    }

    return 0;
}