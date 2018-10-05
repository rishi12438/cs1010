#include "cs1010.h" 
#include <math.h> 
#include <stdbool.h> 

bool is_subset(long n1, long n2){ 
    if(n1<10){ 
        if(n1 == n2){ 
            return true;
        }
        else{ 
            return false; 
        }
    }
    if(n1%10 == n2%10){ 
        return is_subset(n1/10,n2/10); 
    }
    else{ 
        return is_subset(n1/10,n2); 
    }

} 

int main(){ 
    long num1 = cs1010_read_long(); 
    long num2 = cs1010_read_long();
    if(is_subset(num1,num2)){ 
        cs1010_println_string("yes it is a subset"); 
    }
    else{
        cs1010_println_string("no it is not a subset");

    }

}
