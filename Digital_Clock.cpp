#include<iostream>
using namespace std;
int main(){

    int h=0, m=0, s=0;
   cout<<" Input the Time Format in HH : MM : SS "<<endl;
   cin>>h>>m>>s;

   start:
    for(h;h<24;h++){
        for(m;m<24;m++){
            for(s;s<24;s++){
                cout<<h<<m<<s;
                if(h<12){
                    cout<<"AM";
                }else{
                    cout<<"PM";
                }
                for(double i=0; i<3619999;i++){
                    i++;
                    i--;
                }
            s=0;
            }
        m=0;    
        }
    h=0;
    goto start;    
    }
return 0;    
}