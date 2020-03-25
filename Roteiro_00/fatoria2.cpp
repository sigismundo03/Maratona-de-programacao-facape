#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main (){

 ll int n;

    cin>>n;

    if(n!=0){
      for(int i = n-1; i > 0;i--){
         n*=i;
       }
    }else n++;

cout<<n<<endl;

    return 0;
}
