#include "cs1010.h" 
#include <math.h> 

void printOrdinal(long n){
        long ending  = n%10;
        if(ending ==1){
            long endin2 = n%100;
            if(endin2==11){
                cs1010_print_long(n);
                cs1010_println_string("th");
            }
            else{
                cs1010_print_long(n);
                cs1010_println_string("st");

            }

        }
        else if(ending ==2){
            long endin2 = n%100;
            if(endin2==12){
                cs1010_print_long(n);
                cs1010_println_string("th");
            }
            else{
                cs1010_print_long(n);
                cs1010_println_string("nd");

            }
        }
        else if(ending ==3){
            long endin2 = n%100;
            if(endin2==13){
                cs1010_print_long(n);
                cs1010_println_string("th");
            }
            else{
                cs1010_print_long(n);
                cs1010_println_string("rd");

            }
        }
        else{
            cs1010_print_long(n);
            cs1010_println_string("th");
        }
    }

void printCentury(long year){
    long century = year/100 +1;
    printOrdinal(century); 
}
int main(){
    long year = cs1010_read_long(); 
    printCentury(year); 

}
