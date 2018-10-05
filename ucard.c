#include "cs1010.h"
#include <math.h>
long luhnah(long n){
    if(n<10){
        return n;
    }
    long length_of_digit = log10(n)+1;
    long sum = 0; 
    while(n>0){
        long temp_length =log10(n)+1; 
        if((length_of_digit - temp_length)%2 !=0){
            long temp1 = (n%10)*2;
            if(temp1>9){
            sum = sum + temp1%10 +temp1/10 ;
            }
            else{ 
                sum += temp1;
            }
        }
        else{ 
            sum += n%10 ;
        }
        n = n/10; 
    }
    return sum; 
}
void issued(long n){
    long length_n = log10(n)+1; 
    long first_2_digits = n/(pow(10,(length_n-2))); 
    if(first_2_digits>=31 && first_2_digits<=35){
        cs1010_println_string("Issued by East branch"); 
    }
    if(first_2_digits>=51 && first_2_digits<=55){
        cs1010_println_string("Issued by West branch");
    }
    else{ 
        cs1010_println_string("Issued by Central branch");
    }
}
int main(){
    long n = cs1010_read_long();
    long check_num = luhnah(n); 
    if(check_num%7 == 0){
        cs1010_print_string("The check number is "); 
        cs1010_println_long(check_num);
        cs1010_println_string("Valid");
        issued(n); 
    }
    else{
        cs1010_print_string("The check number is ");
        cs1010_println_long(check_num);
        cs1010_println_string("Invalid");
    }
}
