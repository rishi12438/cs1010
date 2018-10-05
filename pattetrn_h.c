#include <math.h> 
#include "cs1010.h" 
void pattern_H(long n){ 
    long i = 0; 
    long middle = ceil(n/2); 
    while(i<n){ 
        long start = i; 
        long temp = 0; 
        while(temp<start){ 
            cs1010_print_string(" "); 
            temp = temp +1; 
        }
        if(i!= middle){ 
            long temp1 = 0; 
            while(temp1<4){ 
                if(temp1!= 1 && temp1!=2){ 
                    cs1010_print_string("*"); 
                }
                else{ 
                    cs1010_print_string(" "); 
                }
                temp1 = temp1 +1; 
            }
        }
        else{ 
            long temp1 = 0; 
            while(temp1<4){ 
                cs1010_print_string("*"); 
                temp1 = temp1+1; 
            }
        }
        cs1010_println_string(""); 
        i = i+1; 
    } 
}


int main(){ 
    long n = cs1010_read_long(); 
    pattern_H(n); 
}
