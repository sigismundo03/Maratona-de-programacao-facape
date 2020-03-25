#include<iostream>

using namespace std;

int busca(int vet[],int tam,int item);

int main(){
    int n,r,i,vert[1000],r2,n2,j,item;
   while(cin>>n>>r){
    for(i=0;i<r;i++){
      cin>>vert[i];                       
     }
   if(n!=r){
      for(j=1;j<=n;j++){
        r2=busca(vert,r,j);
        if(r2==0){
          cout<<j<<" ";          
        }                       
     }
    cout<<"\n";         
   
  }else{cout<<"*\n";}         
    
} 
    
    
    
  return 0;    
}


int busca(int vet[],int tam,int item){
    int i;
    
      for(i=0;i<tam;i++){
         if(vet[i]==item){
              return 1;               
          }
                         
      }
     return 0;
    
}
