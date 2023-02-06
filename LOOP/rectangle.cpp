/*
Rectangle pattern In C++ 

* * * * *
* * * * *
* * * * *

*/
#include<iostream>
using namespace std;
int main(){
    int row, column;
    cout<<"Input the number of Row : ";
    cin>>row;
    cout<<"Input the number of Column : ";
    cin>>column;
    // row Loop
    for( int i = 0 ; i < row ;  i++ ){
        // column Loop
        for( int j = 0 ; j < column ; j++){
            cout<<" *";
        }
    cout<<endl;    
    }

return 0; 

}