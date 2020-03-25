#include<iostream>

using namespace std;
int fot( int n,int m);
int main(){
 	long long int soma =0;
	 int n,i,m;
	
  while(cin>>n>>m){
  	
	  
	fot(n,m);
    

}
	return 0;
}
int fot(int n,int b){
	int i;
	long long int m=n,r= b,soma=0;
	

	for(i=1;i<n;i++){
		m = m * i;
	}
	if(n==0){
		m=1;
	}
	soma+=m;
	for(i=1;i<b;i++){
		r = r * i;
		
	}
	if(b==0){
		r=1;
	}
	soma+=r;
	cout<<soma<<endl;
 return m;
}