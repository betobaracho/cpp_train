#include <iostream>
using std::cout;

int main(){
    int a;
    int *aptr;

    a = 7;
    aptr = &a;
    cout<<"o endereco de a é: "<< &a <<"\n O valor de aptr é: "<<aptr;
    cout<<"\n Ovalor de a é "<<a <<"\n O valor de *aptr é "<<*aptr<<"\n"; 

    
    return 0;
}