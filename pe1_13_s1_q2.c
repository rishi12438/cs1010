#include "cs1010.h"
#include <math.h> 





long number_of_non_square_number(long min, long max){
    long squares[max+1];
    long j =0; 
    while(j<max+1){ 
        squares[j] = 0; 
        j +=1; 
    }
    long i =min; 
    while(i<max+1){
        double temp = sqrt(i); 
        long temp1 = temp; 
        if(temp == temp1){ 
            squares[i] = i;  
        }
        i = i+1; 
    }
    long k = min; 
    long count = 0;
    j = min;
    /*
    while(j<max+1){
                cs1010_println_long(squares[j]);
                        j +=1;
                            } */
    while(k<max+1){
       long no_count = 0; 
       for(long j1 = min; j1< k+1;j1+=1){ 
           if( squares[j1] != 0 && squares[j1]!=1){
               if(k%squares[j1] ==0){
                   no_count +=1; 
               } 
           }
       }
       if(no_count ==0){ 
           count = count+1; 
       }
       k = k+1;
    }

    return count; 
}
int main(){ 
    long min1 = cs1010_read_long(); 
    long max1 = cs1010_read_long(); 
    long min2 = cs1010_read_long(); 
    long max2 = cs1010_read_long(); 
    long count1 = number_of_non_square_number(min1,max1);
    long count2 = number_of_non_square_number(min2,max2);
    if(count1 > count2){ 
        cs1010_print_long(min1); 
        cs1010_print_string(" "); 
        cs1010_println_long(max1); 
         cs1010_println_long(count1);
    }
    else if(count2 > count1){
        cs1010_print_long(min2);
        cs1010_print_string(" ");
        cs1010_println_long(max2);
        cs1010_println_long(count2);
    }
    else{ 
        cs1010_println_string("they are both equal"); 
        cs1010_println_long(count1); 
    }

}
