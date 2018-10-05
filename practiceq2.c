#include "cs1010.h" 
#include <math.h> 
#include <stdbool.h> 
long sum(n){ 
    if(n==0){ 
        return 0; 
    }
    return n + sum(n-1);
}

long hcf(long n1, long n2){
    if(n2==0){
        return n1; 
    }
    return hcf(n2,n1%n2);
}  
 
long lcm(long n1, long n2, long count){
    if(count%n1 ==0 && count%n2 ==0){ 
       // cs1010_println_long(count); 
        return count; 
    }
    count= count+1;
    return lcm(n1,n2,count); 
}
long cube(long n){ 
    return n*n*n; 
}
long cube_of_digits(long n){ 
    if(n<10){
        return cube(n); 
    }
    else{ 
        long last_digit = cube(n%10);
        long rest =n/10; 
        return last_digit +cube_of_digits(rest); 
    }
}
bool armstrong(long n){
    if(cube_of_digits(n)==n){ 
        return true;  
        // cs1010_println_string("It is an armstrong number"); 
    }
    else{
        return false; 
        //cs1010_println_string("it is not"); 
    }
}

bool is_prime(long n, long divisor, long end){
    if(divisor>end){
        return true; 
    }
    if(n%divisor==0){
        return false; 
    }
    else{
        divisor = divisor+1; 
        return is_prime(n,divisor,end); 
    }
}

long recursiv_reverse(long num){
    int length = log10(num);
    if(num == 0){
        return 0; 
    }
    return((num%10*pow(10,length))+recursiv_reverse(num/10));
}
long loop_reverse(long n){
    long length_of_number = log10(n); 
    long m = 0; 
    long count = length_of_number; 
    while(n>0){
        long temp = n%10; 
        m = m+ temp*pow(10,count);
        n = n/10;
        count = count-1;
    }
    return m; 

}
void unique_printer(long* data, long length){ 
    //this is a function that prints unique elements in an array 
    long temp_arr[length+1]; 
    long i =0; 
    while(i<length+1){ 
        temp_arr[i] = 0; 
        i = i+1; 
    }
    long temp = 0; 
    while(temp<length){
        long tempf = data[temp];
        temp_arr[tempf] += 1; 
        temp = temp+1; 
    }
    i = 0; 
    long count = 0; 
    while(i<length+1){ 
        long number = temp_arr[i]; 
        if(number ==1){
            count +=1; 
            cs1010_print_long(i);
            cs1010_print_string(" ");
        }
        i = i+1; 
    }
    if(count ==0){ 
        cs1010_println_string("no unique found"); 
    }
    cs1010_println_string("");

}


int main(){
    int x = 9;
    if(2.5<x<7.5){
        cs1010_print_string("nnn"); 
    }
    else{
        x++;
    }
    cs1010_print_double(x); 
    return 0; 
    //long n1 = cs1010_read_long();
    //long* n2 = cs1010_read_long_array(n1);
    //unique_printer(n2,n1); 
    
    //cs1010_println_long(loop_reverse(n1));
    /*
    if(is_prime(n1,2,sqrt(n1))){ 
        cs1010_println_string("It is prime"); 
    }
    else{ 
        cs1010_println_string("not prime"); 
    }
    */
    //if(armstrong(n1)){ 
    //    cs1010_println_string("It is an armstrong number");
    //}
    //else{ 
    //    cs1010_println_string("It is not an armstrong number");
    //}
    //long n2 = cs1010_read_long(); 
    //cs1010_println_long(lcm(n1,n2,2)); 
}
