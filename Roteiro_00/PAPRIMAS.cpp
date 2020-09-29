#include <bits/stdc++.h>

#define ll long long
using namespace std;


bool primo(int numero){

  int numeroatual = numero, cont=0;

  while(true){
  if(numeroatual==0){
    break;
  }

    if((numero % numeroatual) == 0){
      cont++;
    }

   numeroatual--;
  }
    if(cont >= 3){
      return false;
    }
 if(cont == 2 || numero == 1){
  return true;
 }
}

int numerodaletra(char letra, int numeroMUsc, int numeroMIn){

   if(letra == tolower(letra)){
     return numeroMIn;
   }else{
    return numeroMUsc;
   }


}

void somadepalavara(string palavra){

   int index =0,soma=0;
   for(index = 0; index < palavra.length();index++){
    if(!isalpha(palavra[index])){

    }else{
    if(tolower(palavra[index])=='a'){

      soma+= numerodaletra(palavra[index], 27,1);

      }
    if(tolower(palavra[index])=='b'){
       soma+= numerodaletra(palavra[index], 28,2);

    }if(tolower(palavra[index])=='c'){
         soma+= numerodaletra(palavra[index], 29,3);

    }if(tolower(palavra[index])=='d'){
       soma+= numerodaletra(palavra[index], 30,4);

    }if(tolower(palavra[index])=='e'){
       soma+= numerodaletra(palavra[index], 31,5);

    }if(tolower(palavra[index])=='f'){
         soma+= numerodaletra(palavra[index], 32,6);

    }if(tolower(palavra[index])=='g'){
 soma+= numerodaletra(palavra[index], 33,7);

    }if(tolower(palavra[index])=='h'){

 soma+= numerodaletra(palavra[index], 34,8);
    }if(tolower(palavra[index])=='i'){

 soma+= numerodaletra(palavra[index], 35,9);
    }if(tolower(palavra[index])=='j'){

    soma+= numerodaletra(palavra[index], 36,10);
    }if(tolower(palavra[index])=='k'){
 soma+= numerodaletra(palavra[index], 37,11);

    }if(tolower(palavra[index])=='l'){
 soma+= numerodaletra(palavra[index], 38,12);

    }if(tolower(palavra[index])=='m'){

 soma+= numerodaletra(palavra[index], 39,13);
    }if(tolower(palavra[index])=='n'){
 soma+= numerodaletra(palavra[index], 40,14);

    }if(tolower(palavra[index])=='o'){

 soma+= numerodaletra(palavra[index], 41,15);
    }if(tolower(palavra[index])=='p'){

 soma+= numerodaletra(palavra[index], 42,16);
    }if(tolower(palavra[index])=='q'){
 soma+= numerodaletra(palavra[index], 43,17);

    }if(tolower(palavra[index])=='r'){

 soma+= numerodaletra(palavra[index], 44,18);
    }if(tolower(palavra[index])=='s'){
 soma+= numerodaletra(palavra[index], 45,19);

    }if(tolower(palavra[index])=='t'){
 soma+= numerodaletra(palavra[index], 46,20);

    }if(tolower(palavra[index])=='u'){
   soma+= numerodaletra(palavra[index], 47,21);

    }if(tolower(palavra[index])=='v'){

 soma+= numerodaletra(palavra[index], 48,22);
    }if(tolower(palavra[index])=='w'){
 soma+= numerodaletra(palavra[index], 49,23);

    }if(tolower(palavra[index])=='x'){
 soma+= numerodaletra(palavra[index], 50,24);

    }if(tolower(palavra[index])=='y'){
 soma+= numerodaletra(palavra[index], 51,25);

    }if(tolower(palavra[index])=='z'){
     soma+= numerodaletra(palavra[index], 52,26);

    }
   }

   }
   if(primo(soma)){

   cout<<"It is a prime word.\n";

   }else{
    cout<<"It is not a prime word.\n";
   }


}

int main (){
string palavra;

while(cin >>palavra){
 somadepalavara(palavra);

}
 return 0;
 }
