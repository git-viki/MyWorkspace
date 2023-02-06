/*

 Hollow Left RightAngle Triangle Pattern In C++

        *
      * *
    *   *
  *     *
* * * * *

*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Input the value : ";
    cin>>num;
    // row loop
    for( int row = 0 ; row < num ; row++ ){
        // space loop
        for ( int space = num-1 ; space > row ; space-- ){
            cout<<"  ";
        }
        // star loop
        for(int star = 0 ; star <= row ; star++ ){
            if( star == 0 || star == row ){
                cout<<" *";
            }else{
                if(row == num-1){
                    cout<<" *";
                }
                else{
                cout<<"  ";
                }
            }
            
        }
    cout<<endl;    
    }
 return 0;    
}