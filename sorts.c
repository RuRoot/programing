#include <iostream>
using namespace std;
#include "sorts.h"

//не комилируется.... значит не смотрю....

void insertionSort(int* ar,int size){
        int element;
        int indexArr;
        int j;
        int key=0;
        for(int i = 1; i < size; i++) {//i- текущий элемент
        

                key=0;
                for( j = i-1; j >= 0; j--) { //j- по какой элемент с i мы будим двигать
                       
                        if (ar[j] > ar[i]) {
                                key=1;
                                element = ar[i];//запомнили элемнт который мы будем двигать
                                indexArr = j+1; //запомнили по какой индекс с конца по начало будем двигаться 
                                break;
                        }
                }
                if(key==0){
                     element = ar[i];
                     indexArr = j+1;
                }
                for(  j= i-1; j>=indexArr; j--){
                      
                        ar[ j+1] = ar[ j];
                }//переставили элементы
                ar[indexArr] = element;//в ручную бахнули элемент с конца по начало 
        }
}


void bubbleSort(int* ar,int size){
    int num;
    for(int s=size;s>0;s--){
        for(int i=0;i<size-1;i++){
            if (ar[i]<ar[i+1]){
                num = ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=num;
            }
        }
    }
}

void selectionSort(int* ar,int size){
    int tmpMax;
    int nb;
    int tmp;
    int bufer;
     for(int i=0;i<size;i++){
         tmpMax=ar[i];//предпологаем что 1 элемент последовательности максимальный
        nb=i;//запоминаем индекс начала проверяемого массива
       tmp=i;//для индекса максимума
       for (int j=i+1;j<size;j++){
          if(tmpMax>ar[j]){
              tmpMax=ar[j];//нашли локальный максимум
              tmp=j;//сохранили индекс максимума
          }
       }
         
       bufer=ar[nb];//меняем местами макс и начало
        ar[nb]=ar[tmp];
        ar[tmp]=bufer;
        }
}
void countsort(int *ar, int size){
    int max = getMax(ar,size);
    int array[max+1];
	for (int i = 0; i <max+1; i++){
		array[i] = 0;
	}
	
	
    for (int i = 0; i < size; i++){
		array[ar[i]]++;
	}
    
    int key = 0;
    for (int i = 0; i <= max; i++){
		for (int j = key; j < key + array[i]; j++){
			ar[j] = i;
		}
		key += array[i];
	}
}

void randomFilling(int* ar,int size){
     srand(time(0));
     for(int p=0;p<size;p++){//заполняем массив рандомными числами 
       
        int q = 0+rand()%(10);
         
        ar[p]=q;
    
}}

void print(int* ar,int size){
    for (int n=0;n<size;n++){
        cout << ar[n] << " ";
    }
    }

int retMax(int* ar,int size){
    int  max=ar[0];    
    for (int n=0;n<size;n++){
        if (ar[n]>max){max=ar[n];}
    }
    return(max);
    }
int retMin(int* ar,int size){
    int  min=ar[0];    
    for (int n=0;n<size;n++){
        if (ar[n]<min){min=ar[n];}
    }
    return(min);
    }

