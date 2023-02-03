#include <iostream>
#include "sorts.h"
#include "recursive.h"

using namespace std;

void testInsertionSorts() {
	{ //test 1
		std::cout << "test1 insertion sort is ";
		const int SIZE = 9;
		int ar[] = {9,8,7,6,5,4,3,2,1};
		int etalonAr[] = {9,8,7,6,5,4,3,2,1};
		insertionSort(ar, SIZE);
		int i = 0;
		for (; i < SIZE; i++) {
			if (etalonAr[i] != ar[i]) {
                		cout << "FAILED" << endl;
				break;
			}
		}
		if (i != SIZE-1) {
        		cout << "OK" << endl;
		}
	}
}

void testselectionSort() {
                int ar[] = {10,5,50,7,4,3,8,2,1};
                int etalonAr[] = {1,2,3,4,5,7,8,10,50};
                selectionSort(ar, 9);
                bool ok = true;
                for (int i = 0; i < 9; i++) {
                        if (etalonAr[i] != ar[i]) {
                                cout<< "selectionSort  FAILED" << endl;
                                ok = false;
                                break;
                        }
                }
                if (ok == true) {
                        cout << "selectionSort is  OK" << endl;
                }

        
}


void testbubbleSort(){
    
            int ar[] = {10,5,50,7,4,3,8,2,1};
            int etalonAr[] = {50,10,8,7,5,4,3,2,1};
            bubbleSort(ar, 9);
            bool ok = true;
            for (int i = 0; i < 9; i++) {
                    if (etalonAr[i] != ar[i]) {
                            cout<< "bubbleSort FAILED" << endl;
                            ok = false;
                            break;
                    }
            }
            if (ok == true) {
                    cout << "bubbleSort is  OK" << endl;
            }

    
}
void testcountSort(){
    
            int ar[] = {10,5,50,7,4,3,8,2,1};
            int etalonAr[] = {1,2,3,4,5,7,8,10,50};
            countsort(ar, 9);
            bool ok = true;
            for (int i = 0; i < 9; i++) {
                    if (etalonAr[i] != ar[i]) {
                           cout << "countSort FAILED" << endl;
                            ok = false;
                            break;
                    }
            }
            if (ok == true) {
                    cout << "countSort is OK" << endl;
            }

    
}

void testShowUp(){
   int etalonInt = 12345678;
    if (etalonInt != showUp(8)){
        cout << "showUp FAILED" << endl;
    }
    else{
        cout << "showUp is OK" << endl;
    }
}
void testShowDn(){
   int etalonInt = 876543210;
    if (etalonInt != showDn(8)){
        cout << "showDn FAILED" << endl;
    }
    else{
        cout << "showDn is OK" << endl;
    }
}

void testGetMin(){
    int ar[]={123,1,134,8};
    int etalonInt = 1;
    if (etalonInt != getMin(ar,4)){
        cout << "getMin FAILED" << endl;
    }
    else{
        cout << "getMin is OK" << endl;
    }
}
void testGetMax(){
    int ar[]={123,1,134,8};
    int etalonInt = 134;
    if (etalonInt != getMax(ar,4)){
        cout << "getMax FAILED" << endl;
    }
    else{
        cout << "getMax is OK" << endl;
    }
}

int main(){
    
        testInsertionSorts();

        testselectionSort();

        testbubbleSort();

        testcountSort();
        
        testShowUp();
        
        testShowDn();
        
        testGetMax();
        
        testGetMin();
        
}
>>>>>>> main
