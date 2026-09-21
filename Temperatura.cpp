#include <iostream>

using namespace std;

int main(){

float temperatura =0.0;

cout<<"ingrese la temperatura en c°: ";

cin>>temperatura;

if (temperatura <= 10)
{
    cout<<"La temperatura es fria"<<endl;
}
else if (temperatura > 10 && temperatura <=25)
{
    cout<<"La temperatura es templada"<<endl;   
}
else{
    cout<<"La temperatura es calurosa"<<endl;
}

    return 0;
}