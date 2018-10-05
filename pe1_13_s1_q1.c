#include "cs1010.h" 
#include <math.h> 

double vvv( long length_box, long width_box){
    long move = 0;
    double width_box1 = width_box; 
    double length_box1 = length_box; 
    while(move<3){ 
        width_box1 = width_box1/2.0; 
        move +=1; 
    }
    return (2.0*(length_box1 + width_box1));
}
double hhh( long length_box, long width_box){
       long move = 0;
        double width_box1 = width_box;
            double length_box1 = length_box;
       while(move<3){
           length_box1 = length_box1/2.0;
           move +=1;
       }
       return (2.0*(length_box1+width_box1));
}
double vvh( long length_box, long width_box){
    long move = 0;
     double width_box1 = width_box;
         double length_box1 = length_box;
    while(move<3){
        if(move ==0 || move ==1){ 
            width_box1 = width_box1/2.0;
        }
        if(move ==2){
            length_box1 = length_box1/2.0; 
        }
        move +=1;
    }
    return (2.0*(length_box1 + width_box1));
}
double vhh( long length_box, long width_box){
    long move = 0;
     double width_box1 = width_box;
         double length_box1 = length_box;
    while(move<3){
        if(move ==0 || move ==1){
            length_box1 = length_box1/2.0;
        }
        if(move ==2){
            width_box1 = width_box1/2.0;
        }
        move +=1;
    }
    return (2.0*(length_box1+width_box1));
}
double min_perimeter(long length_box, long width_box){
    double perimeter1 = vvv(length_box,width_box); 
    double perimeter2 = hhh(length_box,width_box);
    double perimeter3 = vvh(length_box,width_box);
    double perimeter4 = vhh(length_box,width_box);
    double min = perimeter1; 
    if(min > perimeter2){ 
        min = perimeter2; 
    }
    else  if(min > perimeter3){
        min = perimeter3;
    }
    else  if(min > perimeter3){
        min = perimeter3;
    }
    return min; 
}

long orientation1(long length_box, long width_box, long length_slab, long width_slab){
        if((length_slab > length_box) || (width_slab>width_box)){
             return length_box*width_box;
        }
        long number_of_possible_slabs  = width_box/width_slab; 
        long unused_area = (length_box*width_box) - (number_of_possible_slabs*(length_slab*width_slab));
        return unused_area;
}
long orientation2(long length_box, long width_box, long length_slab, long width_slab){
    if(length_slab > width_box ||(width_slab>length_box)){
        return length_box*width_box;
    }
    long max_in_x_direction = width_box/length_slab; 
    long max_in_y_direction = length_box/width_slab; 
    long unused_area = (length_box*width_box) - ((max_in_x_direction*max_in_y_direction)*(length_slab*width_slab));
    return unused_area;
}



long min_used_area(long length_box, long width_box, long length_slab, long width_slab){
    long orientation1_val =  orientation1(length_box, width_box,  length_slab, width_slab);
    long orientation2_val =  orientation2(length_box, width_box,  length_slab, width_slab);
    if(orientation1_val<orientation2_val){ 
        return orientation1_val; 
    }
    else{ 
        return orientation2_val;
    }
}
int main(){ 
    long length_box = cs1010_read_long(); 
    long width_box = cs1010_read_long(); 
    long length_slab = cs1010_read_long(); 
    long width_slab = cs1010_read_long();
    cs1010_println_long(min_used_area(length_box,width_box,length_slab, width_slab)); 
    cs1010_println_double(min_perimeter(length_box,width_box));
}
