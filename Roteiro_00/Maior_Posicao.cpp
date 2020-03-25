#include <bits/stdc++.h>

using namespace std;

int main(){
    int numeros[102],i,maior = 0,id_Maior;


    for(i=0;i<100;i++){
        cin>>numeros[i];

        if(i==0 || maior < numeros[i]){

            maior= numeros[i];
            id_Maior = i+1;
        }
    }
    cout<<maior<<endl;
    cout<<id_Maior<<endl;
    return 0;
}
