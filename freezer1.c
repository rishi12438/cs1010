/*
 * CS1010 Semester 1 AY18/19
 * Exercise 1: Freezer
 * @file: freezer1.c
 * @author: Rishi (Group 21)
 */
#include <math.h>
#include "cs1010.h"

/**
 * Read the number of hours since power failure and 
 * output the freezer temperature.
 */
int temperature_of(int time){ 
  int temperature = ((4*time*time)/(time+2))-20;
  return temperature; 


}
int main() 
{ 
  
  int time  = cs1010_read_long();
  int temperature1 = temperature_of(time);
  cs1010_println_long(temperature1);

}
