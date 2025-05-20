#include <iostream>
using namespace std;
int main (void){
    int n,mod, primo=1;
    cout<<"Ingrese un numero entero positivo"<<"\n";
    cin>>n;
    for (int i=n-1; i>=2; i--){
        cout<<i<<"\n";
        mod=n%i;
        if (mod==0){
         cout<<"EL numero no es primo"<<"\n";
         primo=0;
         i=2;
        }
        else {
        }
  }
  if (primo ==1){
    cout<<" El numero es primo"<<"\n";
    primo=0;
  }
    else{

    }
return 0;
}
