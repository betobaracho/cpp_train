#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

#include "bubbleSortTemplate.h"


int main(){
    BubbleSort< int > bubbleInt;
    int const size = 10;
    int arrayInt[size] = {2,8,1,0,12,30,-2,90,33,4};
    bubbleInt.sortArray(arrayInt,size);

    for(int i = 0;i < size; i++){
        cout<<arrayInt[i]<<" ";
    }
    cout<<endl;

    BubbleSort< float > bubbleFloat;
    float arrayFloat[size] = {1.0f, 2.5f, 3.7f, 4.2f, 5.9f, 9.0245F, -1.3, 12.0, 100.2, 90.3};
    
    for(int i = 0;i < size; i++){
        cout<< arrayFloat[i]<<" ";
    }
    cout<<endl;

    bubbleFloat.sortArray(arrayFloat,size);
    for(int i = 0;i < size; i++){
        cout<< arrayFloat[i]<<" ";
    }
    cout<<endl;

    return 0;
}