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