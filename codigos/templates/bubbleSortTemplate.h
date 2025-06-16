#ifndef BUBBLESORT_H
#define BUBBLESORT_H

template< class T >

class BubbleSort{
    public:
        BubbleSort();
        void sortArray(T[],int);
    private:
        int sizeArrray;
        T *ptrArray;
};

template< class T >
BubbleSort< T >::BubbleSort(){   
    sizeArrray = 5;
    ptrArray = {0};
};

template<class T>
void BubbleSort< T >::sortArray(T array[], int arraySize) {

    T aux = 0;
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

#endif