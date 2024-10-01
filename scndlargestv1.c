#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  double n,l,s;
  printf("Input positives numbers to get the the second largest of them, input -1 to temrinate the action ");
  scanf("%lf",&n);
  l=0;
  s=0;

  while(n > 0){

    if(n > l){
      s = l;
    }
    
    if(n > l){
      l = n;
    }
 
  scanf("%lf",&n);

  }
  printf("The second largest number is %0.lf \n", s);
}
