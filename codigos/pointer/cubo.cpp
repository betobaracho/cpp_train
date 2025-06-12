#include <iostream>
using std::cout;

int cuboPorValor(int);

int main(){
    int numero=5,cubo=0;

    cubo = cuboPorValor(numero);
    cout<<"O cubo do número "<<numero<<" é: "<<cubo<<"\n";
    
    return 0;
}

int cuboPorValor(int n){
    return n*n*n;
}