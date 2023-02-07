#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input number : ";
    cin>>n;
    for(int i=0; i<n; i++){
        if(i==0 || i==1){
            cout<<i<<endl;
        }
        else{
            int fib= (i-1) + (i-2);
            cout<<fib<<endl;
        }
    }
    return 0;
}