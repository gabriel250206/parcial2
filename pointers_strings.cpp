#include <iostream>
#include <string>
using namespace std;

#define LOG(x) cout<<x<<endl;

int main(){
      char c='a';
      char ci=97;
      const char* chars="hola";
      LOG(*(chars+1));
     


      char name[]= "Gabriel";// hay un caracter oculto, al final del string
      char*pName= &name[0];
      LOG(sizeof name);
      LOG(*(pName+4));


      int numeros[10];
      LOG("numeros: ");
      LOG(sizeof numeros);// nos da el tamaño en bytes

      int numeros2[10];
      LOG("numeros: ");
      LOG((sizeof numeros2)/(sizeof(int)));// ya con esto nos da el tamaño

      cin>>c;// no se para que es esto


      /*
      char* chars=new char[10];
      *chars="hola";
*/



    return 0;
}