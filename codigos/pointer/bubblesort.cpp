#include <iostream>
#include <ctime>
using std::cout;
using std::endl;

#include<iomanip>
using std::setw;

void bubbleSort(int[],int);
void showArray(int[],int);
void fillArray(int[],int);
int main(){
    const int arraySize = 100000;
    int array[arraySize] = {0};
    int inicio=0,fim=0;
    fillArray(array,arraySize);
    inicio = time(0);
    
    cout<<"\nOrdenando o Array "<<arraySize<<" elementos\n\n";
    bubbleSort(array,arraySize);
    fim = time(0);
    cout<<"\nArray ordenado\n\n"<< fim - inicio <<" segundos \n";
   
    return 0;
}

void fillArray(int array[],int arraySize){
    srand(time(0));
    int element;
    for(int i = 0;i < arraySize; i++){
        element = rand() % (arraySize*100-1);
        array[i] = element;
    }
}

void showArray(int array[], int arraySize){   
    for(int i = 0; i < arraySize; i++){        
        cout << "array[ "<< i <<" ] = "<<array[i]<<"\n";
    }
}



void bubbleSort(int array[],int arraySize){
    int aux = 0;
    for(int i = 0; i < arraySize; i++){       
        for(int j = 0 ; j < arraySize-1; j++){          
            if(array[j] > array[j+1]){            
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;                
            }
        }
    }    
}