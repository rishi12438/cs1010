#include "cs1010.h" 
#include <math.h> 
/**
long fact(long x){ 
    if(x == 0){
        return 1; 
    } 
    return x*fact(x-1); 
}
long ne(long x, long y){ 
    if(x ==0 || y ==0){ 
        return 1; 
    }
    if(labs(x)!= x || labs(y)!= y){ 
        return 0; 
    }
    return fact(x+y)/(fact(x)*fact(y));
    
}
*/
long ne(long x, long y)
{
      if (x == 0 || y == 0) {
              return 1;
                }
        return ne(x - 1, y) + ne(x, y - 1);
}
int main(){ 
    long x  = cs1010_read_long(); 
    long y  = cs1010_read_long(); 
    cs1010_println_long(ne(x,y)); 
}
