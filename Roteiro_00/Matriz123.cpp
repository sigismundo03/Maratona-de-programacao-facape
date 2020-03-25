#include <bits/stdc++.h>

using namespace std;

  void mostra(int matriz[][70],int n){
       int i,j;
       for(i=0;i<n;i++){
          for(j=0;j<n;j++){
           cout<<matriz[i][j];
        }
        cout<<endl;
       }

}

int main(){
    int matriz[70][70],n,i,j;


    while(cin>>n){
        for(i=0;i<n;i++){
          for(j=0;j<n;j++){
              if(i+j==n-1){
                  matriz[i][j]=2;
              }else{
                  if(i==j){
                      matriz[i][j]=1;
                  }else{
                      matriz[i][j]=3;
                  }
              }
        }
        }
        mostra(matriz,n);

    }

}
