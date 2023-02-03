#include <iostream>

//написать коммент это искусство....
int tempI;	//это переменная типа int... -- плохой комментарий
int tempA;	//в этой переменной хранится число одинаковых элементов в массиве, которые и т.д. -- лучше
int tempK;	//это переменная используется в функции foo() и предназначена для подсчёта циклов, перед использованием необходимо обнулить -- ничего так коммент
int tempP;	//эта переменная решает проблему [проблема] -- коммент года!!
 

void insertionSort(int* ar,int size){
        int element;
        int indexArr;
        int j;
        int key=0;	//ставь пожалуйста пробелы между переменной равно и значением....
			//как бы это не показалось странным - но очень тяжело читать....
        for(int i = 1; i < size; i++) {//i- текущий элемент - спасибо КЭП
                key=0;
                for( j = i-1; j >= 0; j--) { //j- по какой элемент с i мы будим двигать... кого будим?....

                       
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
                        ar[j+1] = ar[j];
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

//пользуйся tab'ами... функцию не смотрю....
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
посмотри пример оформления функции....
void example_how_to_use_tab() {
	int a = 10;
	for (int i = 0; i < 10; i++) {
		if (a > 5) {
			if (a > 6) {
				a = 2;
			}
		}
	}
	int b = 10;
}

void countsort(int *ar, int size) {
	примерно так должно быть
	int countAr[256];
	memset(countAr, 0x00, 256 * sizeof(int));
	for (int i = 0; i < size; i++) {
		countAr[ar[i]]++;
	}	//здесь сортировка подсчётом заканчиватся
//здесь начинается вывод данных на экран

	for (int i = 0; i < 256; i++) {
		for (int j = 0; j < countAr[i]; j++) {
			std::cout << i << " ";
		}
	}

//по хорошему вывод на экран плохо... надо обновить массив ar
	int curNumEl = 0;
	int i = 0;
	while(i < size)	{
		while(countAr[curNumEl]--) {
			ar[i++] = curNumEl;
		}
		curNumEl++;
	}








    int max = retMax(ar,size);	//не понятно зачем max?????
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
     srand(time(0));	//если так написать, то не будет меняться seed... и рандомные массивы все будут одинаковыми....
todo: проверь высказывание выше...
     for(int p=0;p<size;p++){//заполняем массив рандомными числами - спасибо КЭП!, смотри как оформлять комменты выше
       
        int q = 0+rand()%(10);
         
        ar[p]=q;
    
}}	-- так вообще плохо....

void print(int* ar,int size){
    for (int n=0;n<size;n++){
        cout << ar[n] << " ";
    }
    }
//я понял отсутпы как в питоне.... забудь его... табами и фигурными скобочками....
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

