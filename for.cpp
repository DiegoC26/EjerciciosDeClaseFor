#include <iostream>
using namespace std;
int n;
 int main (void) {
    cout<<"Ingrese un numero entero "<<"\n";
    cin>>n;
    if (n>0){
    for (int i=2; i<n; i=i+2){
        cout<<i<<"\n";
  }
    }
    else {
        cout<<"ingrese un numero entero positivo";
    }
return  0;
}