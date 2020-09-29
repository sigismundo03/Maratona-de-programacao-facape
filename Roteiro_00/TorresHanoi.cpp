#include <bits/stdc++.h>


using namespace std;

int torres(int numero){
    int total =0;
    if(numero ==1){
        return numero;
    }else
        {

        return total= 2 * torres(numero -1);
    }



}

int main(){
    int numero,resultado = 0,numerodeTeste =1;
   while (cin>>numero && numero !=0){
       resultado =0;
      resultado = (int)pow(2, numero) - 1;
      cout<<"Teste "<<numerodeTeste<<endl;
      cout<<resultado<<endl;
       cout<<endl;
       numerodeTeste++;

   }


    return 0;
}
