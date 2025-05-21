#include <iostream>

using std::cout;
using std::ios;

#include <iomanip>

using std::setw;
using std::setiosflags;

#include <cstdlib>
#include <ctime>

void embaralhar(int [][13]);
void mao(const int[][13],const char *[],const char *[]);

int main(){
    const char *nipe[4] = {"Copas","Ouros","Paus","Espadas"};
    const char *face[13] = {"Ás","Dois","Três","Quatro","Cinco","Seis","Sete","Oito","Nove","Dez","Valete","Dama","Rei"};
    int baralho[4][13] = { 0 };

    srand(time(0));
    embaralhar(baralho);
    mao(baralho,face,nipe);
    return 0;
}

void embaralhar(int baralho[][13]){
    int linha,coluna;
    for(int carta = 1; carta <= 52; carta++){
        do{
            linha = rand() % 4;
            coluna = rand() % 13;
           
        } while( baralho[linha][coluna] != 0 );
        baralho[linha][coluna] = carta;
    }
}

void mao(const int baralho[][13],const char *face[], const char *nipe[]){
    for(int carta = 1;carta <= 52 ; carta++){
        for (int linha = 0; linha <= 3; linha++)
        {
            for (int coluna = 0; coluna <= 12; coluna++)
            {
                if(baralho[linha][coluna] == carta){
                    cout<<setw(6) << setiosflags(ios::right)
                    <<face[coluna]<< " de "
                    <<setw(7)<<setiosflags(ios::left)
                    <<nipe[linha]
                    <<(carta % 2 == 0 ? "\n" : "\t");
                }
            }
            
        }
        
    }
}