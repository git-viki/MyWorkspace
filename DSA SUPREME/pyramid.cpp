/* 

            *
          * *
        * * *
      * * * *
    * * * * *
  * * * * * *
* * * * * * *
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
    int n;
    cout<<"input value : ";
    cin>>n;
    // space row loop 
    for(int row=n; row>0; row--){
        for(int column=0; column>row; column++){
            cout<<" *";
        }
        cout<<endl;
    }



    return 0;
}