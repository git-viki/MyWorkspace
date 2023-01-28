#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"input number = ";
    cin>>n;
    for(int i=1;i<n;i++){
        sum= sum+i;
    }
    cout<<"sum of numbers between 0 to "<<n<<" is = "<<sum<<endl;
    return 0;
}