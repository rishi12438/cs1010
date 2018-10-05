#include "cs1010.h" 
double babylonian(long n){ 
    double previous_guess =0; 
    double guess = n/2.0;
    double percentage; 
    double r; 
    if(n==0){ 
        return 0; 
       }
    do{ 
        r = n/guess; 
        cs1010_print_double(r);
        previous_guess = guess; 
        guess = (guess+r)/2.0; 
    }
    while(fabs(((guess-previous_guess)/previous_guess)*100)>0.1);

    return guess; 
}
int main(){ 
    long n = cs1010_read_long(); 
    cs1010_println_double(babylonian(n)); 
}
