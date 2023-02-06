#include <iostream>
using namespace std;

    int point1(){

    int a=5, *b, *c, d=2 ;
    
    cout<<a<<endl;
    b= &a;
    cout<<*b<<endl;
    c= b;
    cout<<*c<<endl;
    return 0;
   }

int main(){

    point1();

    return 0;
}