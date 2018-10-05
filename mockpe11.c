#include <math.h> 
#include "cs1010.h" 
#define NUM 50
int base[NUM] = {  36, 35, 27, 31,  1, 33, 10, 34, 16,  9,
    38,  5, 28, 11, 29,  5, 25, 20,  2,  4,
    9, 16,  7, 17, 30, 29,  1,  3,  9, 17,
    7, 16,  7,  6, 19, 19, 25, 15,  1,  4,
    9,  0,  3, 38,  2, 21, 18, 27, 12, 30 };

void rdup(long input_number, long omitted){ 
    long temp = input_number%10; 
    if(input_number < 10){ 
        cs1010_print_long(input_number);
        cs1010_print_long(input_number);
        return; 
    }
    if(temp != omitted){
        cs1010_print_long(temp);
        cs1010_print_long(temp);
    }
    input_number = input_number/10; 
    return rdup(input_number,omitted); 
}

long subseq(long* pattern_arr, long size_of_pattern, int* base, int num){ 

    if (pattern_length == 0){ 
        // all patterns are found in base
        return 1;
    }
    else if (base_length == 0){ 
        // exhausted base, not completely found
        return 0;
    }
    else if (base[base_length-1] == pattern[pattern_length-1]){
        // one more pattern found, check previous one
        return subseq(base, base_length-1, pattern, pattern_length-1);
    }
    else{ 
        return subseq(base, base_length-1, pattern, pattern_length);
    }
    /*
    if(size_of_pattern == 0){
        return 1; 
    }
    long i = 0;
    long number_to_check = pattern_arr[size_of_pattern -1]; 
    long found;
    long found1=0;
    while(i<num){ 
        if(base[i] == number_to_check) { 
            found1 = found1+1; 
            found = i;
           // cs1010_println_long(i); 
        }
        i = i+1; 
    } 
    if(found1 ==0){ 
        return 0; 
    }
    return subseq(pattern_arr, size_of_pattern-1, base, found); 
    */

}

int main(){ 
    //long input_number = cs1010_read_long(); 
    //long omitted = cs1010_read_long();
    //rdup(input_number, omitted);
    long size_of_pattern = cs1010_read_long(); 
    long* pattern_arr  = cs1010_read_long_array(size_of_pattern);
    if(subseq(pattern_arr, size_of_pattern, base, NUM)){ 
        cs1010_println_string("The pattern is found in the base"); 
    }
    else{ 
        cs1010_println_string("The pattern is not found in the base"); 
    }
}

