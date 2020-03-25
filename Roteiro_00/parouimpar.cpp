#include <bits/stdc++.h>

using namespace std;

bool par( int value){
    bool verdade = false;

    if((value/2) == 0){
        verdade = true;
    }

    return verdade;
    
}



int main(){
    string name[2], nomevecedor[1002];
    int valor,valor2,teste=1,i,tamanho,tamanhodovecedor =  0;


    while(cin>>tamanho && tamanho != 0){
        cin>>name[0]>>name[1];

        for(i = 0; i < tamanho;i++){
            cin>>valor>>valor2;
            if((valor+valor2)%2 == 0  ){
                nomevecedor[tamanhodovecedor] = name[0];
                tamanhodovecedor++;
            }else{
                nomevecedor[tamanhodovecedor] = name[1];
                tamanhodovecedor++;
            }
            
        }
        cout<<"Teste "<<teste<<endl;
        for(i = 0; i < tamanhodovecedor;i++){
            cout<<nomevecedor[i]<<endl;
        }
        /// zerando variaves
        
        teste++;
        tamanhodovecedor =0;
    }

    return 0;
}