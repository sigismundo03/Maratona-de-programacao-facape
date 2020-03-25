#include <bits/stdc++.h>


using namespace std;


int main(){
  int jogadores[2];
  int tamanho,beto,aldo,i,teste=1;

    while(cin>>tamanho && tamanho!=0){
       

        for(i=0;i<tamanho;i++){
           cin>>aldo>>beto;
           jogadores[0]+=aldo;
           jogadores[1]+=beto;
        }
        if(jogadores[0] > jogadores[1]){
            cout<<"Teste "<<teste<<endl;
            cout<<"Aldo"<<endl;

        }else{
            cout<<"Teste "<<teste<<endl;
            cout<<"Beto"<<endl;
        }
        jogadores[0]=0;
        jogadores[1]=0;
        teste++;

    }


}