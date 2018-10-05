#include "cs1010.h" 
#include <math.h> 
#include <stdbool.h> 
bool contains_mustnumber(long n, long must_have){ 
    if(n<10 && n == must_have){
        return true; 
    }
    else if(n<10 && n != must_have){ 
        return false; 
    }
    if(n%10 == must_have){
        return true; 
    }
    else{ 
        return contains_mustnumber(n/10, must_have); 
    }
}
long winner_count(long factor, long must_have, long participants){
    long i = 0; 
    long winner_c  = 0; 
    long total_to_loop_through = participants/factor;
    while(i<total_to_loop_through+1){ 
        long temp = i*factor; 
        if(contains_mustnumber(temp,must_have)){ 
            winner_c+=1; 
        }
        i = i+1; 
    }
    return winner_c;
}

int main(){ 
    long factor = cs1010_read_long();
    long must_have = cs1010_read_long();
    long participants = cs1010_read_long(); 
    cs1010_println_long(winner_count(factor, must_have,participants)); 
}
