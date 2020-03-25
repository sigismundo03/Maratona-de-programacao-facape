#include <bits/stdc++.h>

using namespace std;

int main() {
    int q,d,p,pt;
    while(cin>>q){
    if(q==0){break;}
    cin>>d>>p;

    pt =  d*p*q;

    pt /=(p-q) ;

    if(pt==1){
        cout<<pt<<" pagina\n";
    }else{
        cout<<pt<<" paginas\n";
    }

}
return 0;
}
