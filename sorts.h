#include <iostream>
#include <cstring>
using namespace std;
#ifndef SORTS_H
#define SORTS_H

void mergeSort(int* ar, int size);//1
void insertionSort(int* ar,int  size);//2
void bubbleSort(int* ar,int size);//3
void  print (int* ar,int size);
void selectionSort(int* ar, int size);//4
int retMax(int* ar,int size);
int retMin(int* ar,int size);
void countsort(int *ar, int size);//5
void randomFilling(int* ar,int size,int min,int max);
void swap(int& a, int& b);     

void quickSort(int* ar, int size);//6




#endif
