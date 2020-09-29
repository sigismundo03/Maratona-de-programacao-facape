#include <bits/stdc++.h>

#define ll long long
using namespace std;


int main (){
    int elevador = 0, entrada, saida,index;
    int maximo,numerodeleituras;
    bool isexcedido = false;

    cin>>numerodeleituras>>maximo;

    for(index = 0; index < numerodeleituras; index++){
        cin>>saida>>entrada;
        elevador = abs(elevador -saida);
        elevador +=entrada;
      

        if(elevador > maximo){
            isexcedido = true;
        }
    }

    if(isexcedido){
        cout<<"S\n";
    }else{
       cout<<"N\n";
    }
}
