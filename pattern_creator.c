#include <math.h> 
#include "cs1010.h"
void pattern(long n){ 
    if(n==0){
        cs1010_print_string("0 found. Sequence terminated"); 
        return;
    }
    long previous[8]; 
    long r = 7; 
    long i = 0;
    long number;
    previous[0]= n; 
    cs1010_print_long(n);
    cs1010_print_string(" ");
    while(i<r){
        long square = n*n; 
        long length = log10(square)+1; 
        if(length ==8){ 
            long p = square%1000000; 
            number = p/100; 
        }
        else{ 
            long p = square/100; 
            number = p%10000;
        }
        long temp = 0; 
        if(number==0){
            cs1010_print_string("0 found. Sequence terminated");
            return; 
        }
        while(temp<i){ 
            if(previous[temp]%10000==number){ 
                cs1010_println_string("");
                cs1010_print_long(number); 
                cs1010_print_string(" repeated in squence");
                return; 
            }
            temp = temp+1; 
        }
        previous[i+1]= number; 
        cs1010_print_long(number); 
        cs1010_print_string(" ");
        n= number;
        i = i+1; 
    }
}
int main(){ 
    long n = cs1010_read_long(); 
    pattern(n); 
   }
