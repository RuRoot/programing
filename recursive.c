#include <iostream>

#include "recursive.h"
using namespace std;

int  dictDn(int n){
        n=n-1;
        return(n);

}

int showDn(int n){
        static string bufer="";
        bufer=bufer+to_string(n);
       
        n=dictDn(n);
        if(n == -1){
                return stoi(bufer);
                  }
        showDn(n);
        //return 1;


}
int  inkUp(int z){
       z=z+1;
       return(z);

}
int getMax(int* ar, int size){
  
   static int index=0;
  
    static int size1=size;
    static int max=ar[index];
   // cout<<"индекс "<<index<<" max "<<max<<" size "<<size1<<" ar[index] "<<ar[index]<< endl;
    if (index==size1-1){
        return(max);
    }
    if (max<=ar[index]){
       
        max=ar[index];
      
    }
    
    
   
    index=index+1;
    getMax(ar,index);
    
}
int getMin(int* ar, int size){
  
   static int index=0;
  
    static int size1=size;
    static int min=ar[index];
   // cout<<"индекс "<<index<<" max "<<max<<" size "<<size1<<" ar[index] "<<ar[index]<< endl;
    if (index==size1-1){
        return(min);
    }
    if (min>=ar[index]){
       
        min=ar[index];
      
    }
    
    
   
    index=index+1;
    getMin(ar,index);
    
}

int showUp(int n){
        static int z=0;//от
        static string bufer="";
        bufer=bufer+to_string(z);
        //cout << z << endl;
        z=inkUp(z);
        if(z ==n+1){
                return stoi(bufer);
        }
        else{
            return showUp(n);
        }

}