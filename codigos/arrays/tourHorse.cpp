#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::ios;
using std::setw;
#include<iomanip>

const int arraySise = 64, tamanhoHorizontal = 8, tamanhoVerical = 8;
void inicializaTabuleiro(int[]);
void mostraTabuleiro(int[][8]);

int main(){

    int tabuleiro[tamanhoHorizontal][tamanhoVerical] = {{0},{0}};
    int horizontal[tamanhoHorizontal] = {2,1,-1,-2,-2,-1,1,2};
    int vertical[tamanhoVerical] = {-1,-2,-2,-1,1,2,2,1};
    int linhaAtual = 3, colunaAtual = 4,numMov = 1,proximaLinha=linhaAtual,proximaColuna=colunaAtual;
   
    for(int jogada = 1; jogada < 64; jogada++){
        
        proximaLinha = linhaAtual + horizontal[jogada % 8];
        proximaColuna = colunaAtual + vertical[jogada % 8];
        if((proximaLinha < 0 || proximaLinha > 7) || (proximaColuna < 0 || proximaColuna > 7 )){            
            continue;
        } 
        else if(tabuleiro[proximaLinha][proximaColuna] == 0){    
          
            linhaAtual = proximaLinha;
            colunaAtual = proximaColuna;
            tabuleiro[linhaAtual][colunaAtual] = numMov++;
        } 
    }
    cout<<"Número de movimentos: "<<numMov<<endl<<endl;
    mostraTabuleiro(tabuleiro);

    return 0;
}

void mostraTabuleiro(int tabuleiro[][8]){
    for(int i = 0;i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout<<setw(5)<< tabuleiro[i][j] ;
        }
        cout << endl;
    }
}

void inicializaTabuleiro(int tabuleiro[][8]){
    for(int i = 0;i < 8; i++){
        for(int j = 0; j < 8; j++){
            tabuleiro[i][j] = 0;
        }
    }
}