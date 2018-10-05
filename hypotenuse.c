#include <math.h>
#include "cs1010.h"

long square(long x) 
{
  return x*x;
}

double hypotenuse_of(long base, long height) 
{
  return sqrt(square(base) + square(height));
}

int main() 
{
  double hypotenuse;
  long base = cs1010_read_long();
  long height = cs1010_read_long();
  hypotenuse = hypotenuse_of(base, height);
  cs1010_println_double(hypotenuse);
}
