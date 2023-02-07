// 3. Write a program in C++ to find Size of fundamental data types.

#include<iostream>
using namespace std;
int main(){
    int a=5;
    float b =10.5;
    char name = 'V' ;
    bool flag = true;
    double d = 15.77;
    int arr[20] = {1,2,3,4,5,6,7,8,9,10};
    char fullname [20] = "Vicky Kumar" ;

    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(name)<<endl;
    cout<<sizeof(flag)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(arr[20])<<endl;
    cout<<sizeof(fullname[20])<<endl;

    return 0;
}