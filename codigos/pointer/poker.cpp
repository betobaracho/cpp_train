#include <iostream>

using std::cout;
using std::ios;

#include <iomanip>

using std::setw;
using std::setiosflags;

#include <cstdlib>
#include <ctime>

void embaralhar(int [][13]);
void mostrarBaralho(const int[][13],const char *[],const char *[]);
void mostrarBaralhoAntigo(const int[][13],const char *[],const char *[]);
void darMao(const int[][13],const char *[], const char *[]);
void mostrarCarta(const int[][13],int,const char *[], const char *[]);
//int** getCarta(const int[][13],int,const char *[], const char *[]);
int main(){
    const char *nipe[4] = {"Copas","Ouros","Paus","Espadas"};
    const char *face[13] = {"Ás","Dois","Três","Quatro","Cinco","Seis","Sete","Oito","Nove","Dez","Valete","Dama","Rei"};
    int baralho[4][13] = { 0 };


    srand(time(0));
    embaralhar(baralho);   
    mostrarBaralho(baralho,face,nipe);
    cout<<"\n Mão \n";
    darMao(baralho,face,nipe);
    cout<<"\n\n";
    return 0;
}

/*int getCarta(const int baralho[][13],int carta,const char *face[],const char *naipe[] ){  
    int naipes[5] = {0};
    int faces[5]  = {0};
    int i = 0;
    for(int linha = 0;linha < 4; linha++){       
        for(int coluna = 0; coluna < 13; coluna++){          
            if(baralho[linha][coluna] == carta){
                naipes[i] = linha;
                faces[i] = coluna;
                i++;                
            }
        }
    }
    return naipes
}
*/
void mostrarCarta(const int baralho[][13],int carta,const char *face[],const char *naipe[] ){  
    cout<<"carta "<<carta<<" ";
    for(int linha = 0;linha < 4; linha++){       
        for(int coluna = 0; coluna < 13; coluna++){          
            if(baralho[linha][coluna] == carta){
                cout<<setw(6) << setiosflags(ios::right)
                    <<face[coluna]<< " de "
                    <<setw(7)<<setiosflags(ios::left)
                    <<naipe[linha]
                    <<(carta % 2 == 0 ? "\n" : "\t");
            }
        }
    }
}
void darMao(const int baralho[][13],const char *face[],const char *naipe[]){
    int naipes[5] = {0};
    int faces[5]  = {0};
    int i = 0;
    int testarMao(const int[],const int[]);
    for(int carta=1;carta<=5;carta++){
        for(int linha = 0;linha < 4; linha++){       
            for(int coluna = 0; coluna < 13; coluna++){     
            // cout<<"baralho: "<<baralho[linha][coluna]<<"\n";     
                //cout<<"i "<<i<<" ";
                if(baralho[linha][coluna] == carta){
                    cout<<setw(6) << setiosflags(ios::right)
                        <<face[coluna]<< " de "
                        <<setw(7)<<setiosflags(ios::left)
                        <<naipe[linha]
                        <<(i % 2 == 0 ? "\n" : "\t");
                        naipes[i] = linha;
                        faces[i] = coluna;
                    i++;
                }
            }
        }
    }
    testarMao(faces,naipes);
}

int testarMao(const int faces[], const int naipes[]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
          cout<<faces[i]<<" "<<naipes[j]<<"\n";
        }
    }
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
        //cout<<"carta "<<carta<<" "<<coluna<<" "<<linha<<" "<<baralho[linha][coluna] <<"\n";
    }
}

void mostrarBaralho(const int baralho[][13],const char *face[], const char *nipe[]){
    for(int carta = 1;carta <= 52 ; carta++){
        mostrarCarta(baralho,carta,face,nipe);               
    }
}

void mostrarBaralhoAntigo(const int baralho[][13],const char *face[], const char *nipe[]){
    for(int carta = 1;carta <= 52 ; carta++){
        //mostrarCarta(baralho,carta,face,nipe);
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