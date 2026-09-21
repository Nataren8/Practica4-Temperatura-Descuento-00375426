#include <iostream>

using namespace std;

int main(){

float monto =0.0;
float total = 0.0;

cout<<"ingrese el monto de compras total: ";

cin>>monto;

if (monto>100 && monto <=200)
{
    total = monto * 0.90;
    cout<<"el monto total con descuento de 10 porciento es de: " <<total<< endl;
}
else if( monto > 200){

        total = monto * 0.80;
        cout<<"el monto total con 20 porciento descuento es de: " <<total<< endl;
}
else{
    total = monto;
    cout<<"No hay descuento a compras menores de 100$ total: " <<total<< endl;
}

return 0;
}