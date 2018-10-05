#include <stdio.h>
//this is the recursive algorithm to calculate the sum in a list 
int r(int* l, int k)
{ 
	if(k ==1){ 
		return l[0];
		}
	else{

		return l[k-1]+r(l,k-1);// this is the recursive part 
		} 

}


int main(){ 
	int l[30] = {1,2,3,6,7,8,9,0,1,2,3,34}; // we need to specify the length of the list before we create a list 
	int k = 12;
  printf("%d\n",r(l,k));


}
