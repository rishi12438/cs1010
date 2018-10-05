#include <math.h> 
#include "cs1010.h"

long get_magic(long n){ 
    long place_1 = n%10; 
    long place_3 = (n%1000)/100;
    long place_5 = (n%100000)/10000;
    return (place_1+place_3+place_5)%10;
        
    /*
    
    if(length ==1|| length==0){
        cs1010_println_long(n);
        return n%10; 
    }
    if(((original - length) +1) == 3 || ((original - length)+1) ==5||((original - length)+1) ==1){ 
        //cs1010_println_long(n%10);
        return n%10 + get_magic(n/10,length-1,original); 
    }
    else{
        cs1010_println_long(n);
        return get_magic(n/10,length-2,original); 
    }
    */
}


int main(){ 
    long n = cs1010_read_long(); 
    cs1010_println_long(get_magic(n));



}
