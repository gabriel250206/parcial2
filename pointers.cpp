#include <iostream>
using namespace std;

int suma(int &x, int y){
return x+y;
}
int pSuma(int* x, int y){
return *x+y;
}

int main(){
        /*
        int arr[10];

        arr[0]=9;
        int* pArr=new int[10];
        pArr[0]=10;
        arr[6]=12;
        int *Arre=&arr[6];
        int *Arreg=arr;
        cout<<arr[0]<<endl<<pArr[0]<<endl<<*Arre<<endl<<Arreg;
        cout<<"------------------"<<endl<<&pArr[0]+1<<endl<<&pArr[0];
      
*/
      int x;
      int*pX=&x;

        x=9;
        cout<<suma(x,2)<<endl;
        cout<<pSuma(pX,3);

        
    return 0;
}
