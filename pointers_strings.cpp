#include <iostream>
#include <string>
using namespace std;

#define LOG(x) cout<<x<<endl;

int main(){
      char c='a';
      char ci=97;
      const char* chars="hola";
      LOG(*(chars+1));
      string name="gabo";
      string* pName=&name;

      LOG(&name);
      LOG(pName);





      /*
      char* chars=new char[10];
      *chars="hola";
*/



    return 0;
}