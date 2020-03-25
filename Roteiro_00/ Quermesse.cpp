#include <bits/stdc++.h>


using namespace std;

int main(){
    int numero,listanumero[10002],iddasorte,teste=0;

    while(cin>>numero&&numero!=0){

        for(int i=0;i < numero; i++){
            cin>>listanumero[i];

            if(i+1==listanumero[i]){
                iddasorte=listanumero[i];
            }
        }
        teste++;
        cout<<"Teste "<<teste<<endl;
        cout<<iddasorte<<endl;
    }



    return 0;
}
                                                                              