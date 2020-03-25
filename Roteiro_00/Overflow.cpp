#include<iostream>

using namespace std;

int main(){
  long long int n,p,q,overflow;
   char c;
     cin>>n;
     cin>>p>>c>>q; 
    if(c=='+'){
       overflow=p+q;
       if(overflow>n){
         cout<<"OVERFLOW\n"; 
         }else{cout<<"OK\n";}
    }else{
         overflow=p*q;
       if(overflow>n){
         cout<<"OVERFLOW\n"; 
         }else{cout<<"OK\n";} 
          
          }
    
 
}
