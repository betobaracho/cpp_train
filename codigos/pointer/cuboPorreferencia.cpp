#include <iostream>
using std::cout;

void cuboPorReferencia(int *);

int main(){
    int numero=5;
    cout<< "O valor original do numero é: "<<numero<<"\n";
    cuboPorReferencia(&numero);
    cout<< "número "<<numero<<"\n";
    return 0;
}

void cuboPorReferencia(int *nptr){
    *nptr = *nptr * *nptr * *nptr;
}