#include <iostream>

#include<math.h>

using namespace std;

int main()

{

float n,j,i,p;

cout<<"enter n \n";

cin>>n;

n=n+3;

p=floor((4*n-2.5)/5.8);

for(j=p;j>=-p;j--){

for(i=-n;i<=n;i++){

if(p*p*i*i+n*n*j*j<=n*n*p*p)

cout<<"*";

else{

cout<<" ";

}

}

cout<<endl;

}

return 0;

}

