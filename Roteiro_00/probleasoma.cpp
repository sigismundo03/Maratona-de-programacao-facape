#include <bits/stdc++.h>


using namespace std;
int main(){
set<int> lista;
vector <int> listasoma;

int i =0, soma = 0,n;

while(cin>>n){

    if(lista.count(n)){
         lista.insert(n);
        listasoma.insert[n];
         i++;
    }

}
for(i=0;i<lista.size;i++){
    soma += listasoma[i];
}
cout<<soma<<endl;
return 0;
}
