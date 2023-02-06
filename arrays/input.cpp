#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Input 5 numbers :";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0; i<5; i++){
    cout<<arr[i]<<"\t";
    }



    return 0;
}