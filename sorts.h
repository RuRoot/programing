#include <iostream>
#include <cstring>
using namespace std;
#ifndef SORTS_H
#define SORTS_H

void mergeSort(int* ar, int size);
void insertionSort(int* ar,int  size);
void bubbleSort(int* ar,int size);
void  print (int* ar,int size);
void selectionSort(int* ar, int size);
int retMax(int* ar,int size);
int retMin(int* ar,int size);
void countsort(int *ar, int size);
void randomFilling(int* ar,int size,int min,int max);
     






#endif
