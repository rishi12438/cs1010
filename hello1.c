#include <math.h>
#include <stdio.h>
double square(int m,int n){     

double val;
val = sqrt(m*m +n*n);
return val;

}

int main(){
int g;
int h;

printf("Please enter the first integer");
scanf("%d",&g);
printf("please enter second integer");
scanf("%d",&h);
printf("%f\n",square(g,h));
return 0;
  
} 
        
